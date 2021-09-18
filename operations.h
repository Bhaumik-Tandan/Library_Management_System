#include "book.h"
#include "suscriber.h"
#pragma once

bool subscriber_exists(int borrower_number)
{
    subscriber_node *p=head_subscriber;

    while(p && p->borrower_number!=borrower_number)
    p=p->n;

    return p;
}

void issue_book(char book[30],int borrower_number,char date[10])
{
    subscriber_node *p=head_subscriber;

    while(p && p->borrower_number!=borrower_number)
    p=p->n;

    if(p->number==5)
    {
        printf("\n %s has exceeded the limit of issuing books",p->name);//indicate limit exceeds
        return;
    }
    
    for(int i=0;i<p->number;i++)
    if(strcmp(p->book[i]->title,book)==0)// indicate book already issued
    {
        printf("\n %s has already issued %s with accession number %d",p->name,book,p->book[i]->accession_number);
        return;//indicate book already issued
    }
    
    book_node *issue=set_tag(book,1);

    if(!issue)
    {
        printf("\n %s is not available in the library",book);
        return;
    }

    int n=p->number;
    p->number=n+1;

    p->book[n]=issue;
    strcpy(p->date[n],date);

    printf("\n %s with accession number %d has been issued to %s with borrower number %d on %s",book,p->book[n]->accession_number,p->name,p->borrower_number,date); 
}

void return_book(char book[30],int borrower_number)
{
    subscriber_node *p=head_subscriber;

    while(p && p->borrower_number!=borrower_number)
        p=p->n;
    
    if(p->number==0)
    {
        printf("\n %d) %s has no pending returns",p->borrower_number,p->name);//indicate no book
        return;
    }
    
    int f=-1;
    for(int i=0;i<p->number;i++)
    if(strcmp(p->book[i]->title,book)==0)// indicate book issued
    {
        f=i;
        break;
    }

    if(f==-1)
    {
        printf("\n %d) %s has not issued book %s",p->borrower_number,p->name,book);//indicate no book
        return;
    }

    p->book[f]->tag=0;//set to not issued
    
    printf("\n %s with accession number %d has been returned by %s with borrower number %d which was issued on %s",
    book,p->book[f]->accession_number,p->name,p->borrower_number,p->date[f]); 

    p->book[f]=0;
    for(int i=f;i<p->number-1;i++)
    {
        p->book[i]=p->book[i+1];
        strcpy(p->date[i],p->date[i+1]);
    }

    p->number-=1;
}

void print_book(int borrower_number)
{
    subscriber_node *p=head_subscriber;

    printf("\n");

    while(p && p->borrower_number!=borrower_number)
    p=p->n;

    if(p->number==0)
    {
        printf("\n %d) %s has not issued any book",p->borrower_number,p->name);
        return;//indicate book not found
    }

    printf("\n Books issued by %s are: ",p->name);

    for(int i=0;i<p->number;i++)
    printf("\n  %d) %s on %s",p->book[i]->accession_number,p->book[i]->title,p->date[i]);
}


void print_subscriber(char book[30])
{
    subscriber_node *p=head_subscriber;

    printf("\n\n %s has been issued by: ",book);

    int f=-1;

    while(p)
    {
        for(int i=0;i<p->number;i++)
        if(!strcmp(p->book[i]->title,book))
        {
            printf("\n  %d) %s on %s: %d",p->borrower_number,p->name,p->date[i],p->book[i]->accession_number);
            f=1;
            break;
        }
        p=p->n;    
    }

    if(f==-1)
    printf("\n  No record found");
}