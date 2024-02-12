#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
    {
        printf("The Entered Character is a Vowel");
    }
    else{
        printf("The Entered Character is a Consonant");
    }
}