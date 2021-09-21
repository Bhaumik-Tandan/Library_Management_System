#pragma once

void add_borrower()
{
    char n[30],*p;
    int bn;
    printf("\n\n Enter the details:- ");
     printf("\n  Name: ");
    gets(n); //to ignore \n
    gets(n);
    printf("  Borrower number: ");
    scanf("%d",&bn);
    printf("  Password: ");
    p=pad('*');
    add_subscriber(n,bn,p);
}