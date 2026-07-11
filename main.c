#include "library.h"

struct Book book[MAX_BOOKS];
struct Issue issue[MAX_ISSUES];

int count = 0;
int issue_count = 0;

int main()
{
    int choice;

    while(1)
    {
        printf("\n******** LIBRARY MANAGEMENT MENU ********\n");
        printf("1. Add New Book\n");
        printf("2. Update Book Details\n");
        printf("3. Remove Book\n");
        printf("4. Search Book\n");
        printf("5. View All Books\n");
        printf("6. Issue Book\n");
        printf("7. Return Book\n");
        printf("8. List Issued Books\n");
        printf("9. Save\n");
        printf("10. Exit\n");

        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                book_add();
                break;

            case 2:
                book_update();
                break;

            case 3:
                book_delete();
                break;

            case 4:
                book_search();
                break;

            case 5:
                book_show();
                break;

            case 6:
                book_issue();
                break;

            case 7:
                book_return();
                break;

            case 8:
                issued_list();
                break;

            case 9:
                book_save();
                break;

            case 10:
                book_exit();
                break;

            default:
                printf("\nInvalid Choice...\n");
        }
    }

    return 0;
}
