#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_ISSUES 100

/* Book Structure */
struct Book
{
    int book_id;
    char book_name[50];
    char author_name[50];
    int quantity;
};

/* Issue Structure */
    struct Issue
{
    int book_id;
    char book_name[50];

    int user_id;
    char user_name[50];

    char issue_date[15];
    char due_date[15];
    char return_date[15];

    int fine;
    int returned;
};

/* Global Variables */
extern struct Book book[MAX_BOOKS];
extern struct Issue issue[MAX_ISSUES];

extern int count;
extern int issue_count;

/* Function Prototypes */
void book_add(void);
void book_show(void);
void book_update(void);
void book_delete(void);
void book_search(void);
void book_issue(void);
void book_return(void);
void issued_list(void);
void book_save(void);
void book_exit(void);

#endif
