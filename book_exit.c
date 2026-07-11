#include "library.h"

void book_exit()
{
    int choice;

    printf("\n******** EXIT MENU ********\n");
    printf("1. Save and Exit\n");
    printf("2. Exit Without Saving\n");

    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            book_save();
            printf("\nRecords Saved Successfully...\n");
            printf("Exiting Library Management System...\n");
            exit(0);

        case 2:
            printf("\nExiting Without Saving...\n");
            printf("Thank You...\n");
            exit(0);

        default:
            printf("\nInvalid Choice...\n");
    }
}
