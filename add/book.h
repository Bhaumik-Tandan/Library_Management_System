#pragma once
void book()
{
    char t[30];
    int an;
    printf("\n\n Enter the book details:- ");
    printf("\n  Title: ");
    gets(t);
    gets(t);
    printf("  Accession number: ");
    scanf("%d",&an);

    add_book(t,an);
}