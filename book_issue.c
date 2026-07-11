#include "library.h"
#include <time.h>

void book_issue()
{
    int i, id;
    time_t t;
    struct tm *tm_info;

    if(count == 0)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    printf("\nEnter Book ID to Issue : ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(book[i].book_id == id)
        {
            if(book[i].quantity == 0)
            {
                printf("\nBook Not Available...\n");
                return;
            }

            issue[issue_count].book_id = book[i].book_id;
            strcpy(issue[issue_count].book_name, book[i].book_name);

            printf("Enter User ID : ");
            scanf("%d", &issue[issue_count].user_id);

            printf("Enter User Name : ");
            scanf(" %[^\n]", issue[issue_count].user_name);

         
            t = time(NULL);
            tm_info = localtime(&t);
            strftime(issue[issue_count].issue_date,
                     sizeof(issue[issue_count].issue_date),
                     "%d/%m/%Y",
                     tm_info);

          
            t += 7 * 24 * 60 * 60;
            tm_info = localtime(&t);
            strftime(issue[issue_count].due_date,
                     sizeof(issue[issue_count].due_date),
                     "%d/%m/%Y",
                     tm_info);

            book[i].quantity--;

            issue_count++;

            printf("\nBook Issued Successfully...\n");
            printf("Issue Date : %s\n", issue[issue_count-1].issue_date);
            printf("Due Date   : %s\n", issue[issue_count-1].due_date);

            return;
        }
    }

    printf("\nBook Not Found...\n");
}
