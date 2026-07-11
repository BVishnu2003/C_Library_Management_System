#include "library.h"

void book_delete()
{
    int i, j, id;
    char name[50];
    int choice;

    if(count == 0)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    printf("\n******** DELETE MENU ********\n");
    printf("1. Delete by Book ID\n");
    printf("2. Delete by Book Name\n");

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
                    for(j = i; j < count - 1; j++)
                    {
                        book[j] = book[j + 1];
                    }

                    count--;

                    printf("\nBook Deleted Successfully...\n");
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
                    for(j = i; j < count - 1; j++)
                    {
                        book[j] = book[j + 1];
                    }

                    count--;

                    printf("\nBook Deleted Successfully...\n");
                    return;
                }
            }

            printf("\nBook Not Found...\n");
            break;

        default:

            printf("\nInvalid Choice...\n");
    }
}
