#include "library.h"
#include <time.h>

void book_return()
{
    int i, j;
    int book_id, user_id;
    time_t t;
    struct tm *tm_info;
    double diff_days;

    if(issue_count == 0)
    {
        printf("\nNo Books Have Been Issued...\n");
        return;
    }

    printf("\nEnter Book ID : ");
    scanf("%d", &book_id);

    printf("Enter User ID : ");
    scanf("%d", &user_id);

    for(i = 0; i < issue_count; i++)
    {
        if(issue[i].book_id == book_id &&
           issue[i].user_id == user_id)
        {
            
            t = time(NULL);
            tm_info = localtime(&t);

            strftime(issue[i].return_date,
                     sizeof(issue[i].return_date),
                     "%d/%m/%Y",
                     tm_info);

           
            struct tm due_tm = {0};

            sscanf(issue[i].due_date,
                   "%d/%d/%d",
                   &due_tm.tm_mday,
                   &due_tm.tm_mon,
                   &due_tm.tm_year);

            due_tm.tm_mon--;
            due_tm.tm_year -= 1900;

            time_t due_time = mktime(&due_tm);

            diff_days = difftime(t, due_time) / (60 * 60 * 24);

            if(diff_days > 0)
{
    issue[i].fine = (int)diff_days * 5;
}
else
{
    issue[i].fine = 0;
}

            issue[i].returned = 1;

           
            for(j = 0; j < count; j++)
            {
                if(book[j].book_id == book_id)
                {
                    book[j].quantity++;
                    break;
                }
            }

            printf("\nBook Returned Successfully...\n");
            printf("Return Date : %s\n", issue[i].return_date);
            printf("Fine Amount : Rs.%d\n", issue[i].fine);

            return;
        }
    }

    printf("\nIssue Record Not Found...\n");
}
