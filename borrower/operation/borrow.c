#pragma once

void borr(subscriber_node *p)
{
    char b[30],d[20];
    printf("\n Enter the name of the book to be borrowed: ");
    gets(b);
    gets(b);
    printf(" Enter the date: ");
    gets(d);
    issue_directly(p,b,d);
}