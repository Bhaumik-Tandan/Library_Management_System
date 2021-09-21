#pragma once

void add_borrower(int bn)
{
    char n[30],*p;
    printf("\n\n Enter the details:- ");
     printf("\n  Name: ");
    gets(n); //to ignore \n
    gets(n);
    printf("  Password: ");
    p=pad('*');
    add_subscriber(n,bn,p);
}