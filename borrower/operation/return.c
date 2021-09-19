#pragma once
void ret(subscriber_node *p)
{
    char b[30];
    printf("\n Enter the name of the book to be returned: ");
    gets(b);
    gets(b);
    return_directly(p,b);
}