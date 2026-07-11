#include "library.h"

void book_show()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available...\n");
        return;
    }

    printf("\n=====================================================================\n");
    printf("Book ID\tBook Name\t\tAuthor Name\t\tQuantity\n");
    printf("=====================================================================\n");

    for(i = 0; i < count; i++)
    {
        printf("%d\t%-20s\t%-20s\t%d\n",
                book[i].book_id,
                book[i].book_name,
                book[i].author_name,
                book[i].quantity);
    }

    printf("=====================================================================\n");
}
