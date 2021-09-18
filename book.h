#include<stdbool.h>
#include<string.h>
#include <stdlib.h>
#pragma once
struct  book_node
{
    char title[30];
    int accession_number;
    bool tag;
    struct  book_node *n;
}*head_book;

typedef struct  book_node book_node;

void add_book(char title[30],int accession_number)//return 1 indicate data successfully inserted
{
    book_node *t=(book_node*)malloc(sizeof(book_node));
    strcpy(t->title,title);
    t->accession_number=accession_number;
    t->tag=0;
    t->n=0;

    if(!head_book)
    {
        head_book=t;
        printf("\n Book \"%s\" added with accession number %d",title,accession_number);
        return;
    }

    book_node *p=head_book;

    while(p->n)
    if(p->accession_number==accession_number)//check if the accession number is unique or not
    {
        printf("\n Accession number %d already assigned with book \"%s\"",accession_number,p->title);
        return;
    }
    else
    p=p->n;

    if(p->accession_number==accession_number)
    {
        printf("\n Accession number %d already assigned with book \"%s\"",accession_number,p->title);
        return;
    }

    printf("\n Book \"%s\" added with accession number %d",title,accession_number);
    p->n=t;
}

book_node* set_tag(char book[30],bool tag)//return 1 on successful change
{
  
    book_node *p=head_book;
    while(p && !(strcmp(p->title,book)==0 && p->tag!=tag))//find the book wit book number and not isssued
    p=p->n;

    if(!p)
        return 0;
    
    p->tag=tag;
    
    return p;    
}