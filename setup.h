#include "operations.h"
#pragma once
void add_default_subscribers()
{
    printf("\n");
    add_subscriber("Rohan Gupta",221);
    add_subscriber("Bhaumik Tandan",292);
    add_subscriber("Rohan Gupta",321);
    add_subscriber("Rahul Misra",221);//will not get added
    add_subscriber("Naman Sethi",121);
}

void add_default_books()
{
    printf("\n");
    add_book("Three men in a boat",1564);
    add_book("7 ages",9564);
    add_book("Macbeth",3253);
    add_book("End game",1014);
    add_book("Dance of dragons",1024);
    add_book("Invisible Man",1114);
    add_book("Dead end",1814);
    add_book("Clash of Kings",7814);
    add_book("Three men in a boat",1564);//will not get added
    add_book("7 ages",1264);//will get added as accession number changed
    add_book("Three men in a boat",1253);
    add_book("7 ages",1164);
    add_book("End game",1019);
    add_book("Macbeth",9564);//will not get added
    add_book("Invisible Man",1214);
    add_book("End game",1004);
}

void add_default_issue()
{
    printf("\n");
    issue_book("Macbeth",221,"12/2/2013");
    issue_book("Three men in a boat",221,"13/3/2013");
    issue_book("7 ages",221,"13/3/2013");
    issue_book("Invisible Man",221,"13/9/2013");

    issue_book("Three men in a boat",221,"13/3/2013");//will not get issued as already issued
    issue_book("Three men in a boat",292,"13/3/2013");//will get issued by different person
    issue_book("Dead end",292,"23/3/2013");

    issue_book("End game",221,"13/3/2014");
    issue_book("Clash of Kings",221,"23/3/2013");//will not get issued as limit exeded

    issue_book("Last supper",292,"23/3/2013");//will not get issued as book not available

    issue_book("Dead end",321,"23/3/2013");//will not get issued as book not available as we only had one copy already issued by 292
}

void test_return_operations()
{
    printf("\n");
    return_book("Three men in a boat",121);//will not return as he has not issued any book

    return_book("Clash of Kings",221);//will not return as he has not issued the given book

    return_book("Dead end",292);
}

void test_display_operation()
{
    printf("\n");

    print_book(221);

    print_book(121);//will print not issued message
}

void test_subscriber_disp_operation()
{
    printf("\n");
    print_subscriber("Three men in a boat");
    print_subscriber("Dance of dragons");
}

void setup()
{
    add_default_subscribers();
    add_default_books();
    add_default_issue();

    //bellow all are just for testing
    // test_return_operations(); 
    // test_display_operation();
    // test_subscriber_disp_operation();
}