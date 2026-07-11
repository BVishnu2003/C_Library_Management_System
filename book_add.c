#include "library.h"

void book_add()
{
    if(count == MAX_BOOKS)
    {
        printf("\nLibrary is Full...\n");
        return;
    }

    book[count].book_id = count + 1;

    printf("\nEnter Book Name : ");
    scanf(" %[^\n]", book[count].book_name);

    printf("Enter Author Name : ");
    scanf(" %[^\n]", book[count].author_name);

    printf("Enter Quantity : ");
    scanf("%d", &book[count].quantity);

    count++;

    printf("\nBook Added Successfully...\n");
}
