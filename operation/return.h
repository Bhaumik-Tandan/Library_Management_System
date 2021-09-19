#pragma once

void return_directly(subscriber_node* p,char book[30])
{
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

void return_book(char book[30],int borrower_number,char pas[30])
{
    subscriber_node *p=subscriber_exists(borrower_number,pas);//imported in login

    if(!p)
    printf("\nWrong credentials");
    else
    return_directly(p,book);
}

