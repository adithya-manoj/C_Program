#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert element at the back of the linked list
void insertAtBack(struct Node** head_ref, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    // Assign data to the new node
    new_node->data = new_data;
    
    // Set next of the new node as NULL since it will be the last node
    new_node->next = NULL;
    
    // If the linked list is empty, make the new node as the head
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    // Otherwise, traverse to the last node and link the new node
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Initialize head pointer as NULL
    int data;
    char choice;
    
    do {
        printf("Enter data to be inserted at the back of the linked list: ");
        scanf("%d", &data);
        
        insertAtBack(&head, data); // Insert data at the back of the linked list
        
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Linked list contents: ");
    printList(head); // Print the contents of the linked list
    
    return 0;
}
