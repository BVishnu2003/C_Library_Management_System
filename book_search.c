#include "library.h"

void book_search()
{
    int i, id;
    char name[50];
    int choice, found = 0;

    if(count == 0)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    printf("\n******** SEARCH MENU ********\n");
    printf("1. Search by Book ID\n");
    printf("2. Search by Book Name\n");
    printf("3. Search by Author Name\n");

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
                    printf("\n----------------------------------------------\n");
                    printf("Book ID : %d\n", book[i].book_id);
                    printf("Book Name : %s\n", book[i].book_name);
                    printf("Author Name : %s\n", book[i].author_name);
                    printf("Quantity : %d\n", book[i].quantity);
                    printf("----------------------------------------------\n");
                    found = 1;
                    break;
                }
            }

            if(found == 0)
                printf("\nBook Not Found...\n");

            break;

        case 2:

            printf("\nEnter Book Name : ");
            scanf(" %[^\n]", name);

            for(i = 0; i < count; i++)
            {
                if(strcmp(book[i].book_name, name) == 0)
                {
                    printf("\n----------------------------------------------\n");
                    printf("Book ID : %d\n", book[i].book_id);
                    printf("Book Name : %s\n", book[i].book_name);
                    printf("Author Name : %s\n", book[i].author_name);
                    printf("Quantity : %d\n", book[i].quantity);
                    printf("----------------------------------------------\n");
                    found = 1;
                }
            }

            if(found == 0)
                printf("\nBook Not Found...\n");

            break;

        case 3:

            printf("\nEnter Author Name : ");
            scanf(" %[^\n]", name);

            for(i = 0; i < count; i++)
            {
                if(strcmp(book[i].author_name, name) == 0)
                {
                    printf("\n----------------------------------------------\n");
                    printf("Book ID : %d\n", book[i].book_id);
                    printf("Book Name : %s\n", book[i].book_name);
                    printf("Author Name : %s\n", book[i].author_name);
                    printf("Quantity : %d\n", book[i].quantity);
                    printf("----------------------------------------------\n");
                    found = 1;
                }
            }

            if(found == 0)
                printf("\nBook Not Found...\n");

            break;

        default:

            printf("\nInvalid Choice...\n");
    }
}
