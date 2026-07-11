#include "library.h"

void issued_list()
{
    int i;

    if(issue_count == 0)
    {
        printf("\nNo Books Issued...\n");
        return;
    }

    printf("\n==============================================================================================================\n");
    printf("BookID\tBook Name\tUserID\tUser Name\tIssue Date\tDue Date\tReturn Date\tFine\n");
    printf("==============================================================================================================\n");

    for(i = 0; i < issue_count; i++)
    {
        printf("%d\t%-15s\t%d\t%-15s\t%s\t%s\t%s\tRs.%d\n",
               issue[i].book_id,
               issue[i].book_name,
               issue[i].user_id,
               issue[i].user_name,
               issue[i].issue_date,
               issue[i].due_date,
               issue[i].return_date,
               issue[i].fine);
    }

    printf("==============================================================================================================\n");
}
