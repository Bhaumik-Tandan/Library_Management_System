#pragma once

void menu(subscriber_node* b)
{
    printf("\n\n1)Issue a book\n2)Return a book\n3)Show issued books\n4)Show available books\n5)Log out\n6)Exit");
    
    #include "operation/head.h"

    void (*switch_borrower[5])();

    switch_borrower[0]=borr;
    switch_borrower[1]=ret;
    switch_borrower[2]=print_book_direct;
    switch_borrower[3]=disp_avail_book;

    printf("\n Enter your choice: ");
    int c;

    scanf("%d",&c);

    if(c<1 || c>5)
    return;

    if(c==5)
    {
        printf("\n 1)Login\n2)Go to home page\n3)Exit\n  Enter your choice: ");
        scanf("%d",&c);
        if(c==1)
        return borrower();
        if(c==2)
        return home();
        return;
    }

    switch_borrower[c-1](b);

    menu(b);    
}