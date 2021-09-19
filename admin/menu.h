#pragma once

void menu()
{
    #include "display_book.h"
    #include "display_borrower.h"
    #include "../add/book.h"
    #include "../add/borrower.h"

    printf("\n\n1)Add book\n2)Add borrower\n3)Display all the available books\n4)Display the list of all the subscribers\n");
    printf("5)Get the list of books issued by a borrower\n6)Get the list of borrowers of a book\n7)Go to Home Page\n8)Exit\nEnter your choice: ");

    void (*switch_admin[7])();

    int c;
    scanf("%d", &c);

    if (c < 1 || c > 7)
        return;

    switch_admin[0] = book;
    switch_admin[1] = borrower;
    switch_admin[2] = disp_avail_book;
    switch_admin[3] = disp_borrower;
    switch_admin[4] = issued_book;
    switch_admin[5] = issued_borrower;
    switch_admin[6] = home;
    switch_admin[c-1]();

    if(c!=7)//in case of home we dont need to invoke
    menu();
}
