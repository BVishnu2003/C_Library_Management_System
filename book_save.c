#include "library.h"

void book_save()
{
    FILE *fp1, *fp2;
    int i;

    fp1 = fopen("books.csv", "w");

    if(fp1 == NULL)
    {
        printf("\nUnable to Open books.csv\n");
        return;
    }

   
    fprintf(fp1, "Book ID,Book Name,Author Name,Quantity\n");

    for(i = 0; i < count; i++)
    {
        fprintf(fp1, "%d,%s,%s,%d\n",
                book[i].book_id,
                book[i].book_name,
                book[i].author_name,
                book[i].quantity);
    }

    fclose(fp1);

    fp2 = fopen("issued_books.csv", "w");

    if(fp2 == NULL)
    {
        printf("\nUnable to Open issued_books.csv\n");
        return;
    }

   
    fprintf(fp2, "Book ID,Book Name,User ID,User Name\n");

    for(i = 0; i < issue_count; i++)
    {
        fprintf(fp2, "%d,%s,%d,%s\n",
                issue[i].book_id,
                issue[i].book_name,
                issue[i].user_id,
                issue[i].user_name);
    }

    fclose(fp2);

    printf("\nRecords Saved Successfully...\n");
}
