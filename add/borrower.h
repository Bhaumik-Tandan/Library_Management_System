#pragma once
void borrower()
{
    char n[30],*p;
    int bn;
    printf("\n\n Enter the details:- ");
     printf("\n  Name: ");
    gets(n); //to ignore \n
    gets(n);
    printf("  Borrower number: ");
    scanf("%d",&bn);
    gets(p);
    p=getpass("  Password: ");
    add_subscriber(n,bn,p);
}