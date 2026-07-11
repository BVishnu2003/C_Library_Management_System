#include "library.h"

void book_update()
{
    int i, id;
    char name[50];
    int choice;

    if(count == 0)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    printf("\n******** UPDATE MENU ********\n");
    printf("1. Update by Book ID\n");
    printf("2. Update by Book Name\n");

    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

            printf("\nEnter Book ID : ");
            scanf("%d", &id);

            for(i = 0; i < count; i++)
            {
                if(book[i].book_id == id)
                {
                    printf("\nEnter New Book Name : ");
                    scanf(" %[^\n]", book[i].book_name);

                    printf("Enter New Author Name : ");
                    scanf(" %[^\n]", book[i].author_name);

                    printf("Enter New Quantity : ");
                    scanf("%d", &book[i].quantity);

                    printf("\nBook Updated Successfully...\n");
                    return;
                }
            }

            printf("\nBook Not Found...\n");
            break;

        case 2:

            printf("\nEnter Book Name : ");
            scanf(" %[^\n]", name);

            for(i = 0; i < count; i++)
            {
                if(strcmp(book[i].book_name, name) == 0)
                {
                    printf("\nEnter New Book Name : ");
                    scanf(" %[^\n]", book[i].book_name);

                    printf("Enter New Author Name : ");
                    scanf(" %[^\n]", book[i].author_name);

                    printf("Enter New Quantity : ");
                    scanf("%d", &book[i].quantity);

                    printf("\nBook Updated Successfully...\n");
                    return;
                }
            }

            printf("\nBook Not Found...\n");
            break;

        default:

            printf("\nInvalid Choice...\n");
    }
}
