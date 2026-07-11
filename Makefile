library: main.o book_add.o book_show.o book_update.o book_delete.o book_search.o book_issue.o book_return.o issued_list.o book_save.o book_exit.o
	gcc main.o book_add.o book_show.o book_update.o book_delete.o book_search.o book_issue.o book_return.o issued_list.o book_save.o book_exit.o -o library

main.o: main.c library.h
	gcc -c main.c

book_add.o: book_add.c library.h
	gcc -c book_add.c

book_show.o: book_show.c library.h
	gcc -c book_show.c

book_update.o: book_update.c library.h
	gcc -c book_update.c

book_delete.o: book_delete.c library.h
	gcc -c book_delete.c

book_search.o: book_search.c library.h
	gcc -c book_search.c

book_issue.o: book_issue.c library.h
	gcc -c book_issue.c

book_return.o: book_return.c library.h
	gcc -c book_return.c

issued_list.o: issued_list.c library.h
	gcc -c issued_list.c

book_save.o: book_save.c library.h
	gcc -c book_save.c

book_exit.o: book_exit.c library.h
	gcc -c book_exit.c

clean:
	rm -f *.o library books.csv issued_books.csv
