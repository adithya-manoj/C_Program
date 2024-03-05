#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertEle(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printElements(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    int data;
    char n;
    struct Node* head = NULL;

    do {
        printf("Enter the data to be Entered:");
        scanf("%d", &data);
        insertEle(&head, data);

        printf("Do you want to Enter More (Y/N): ");
        scanf(" %c", &n);
    } while (n == 'Y' || n == 'y');

    printf("The Elements are: ");
    printElements(head);

    return 0;
}
