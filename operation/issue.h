#pragma once

void issue_directly(subscriber_node* p,char book[30],char date[20])
{
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

void issue_book(char book[30],int borrower_number,char date[10],char pas[30])
{
    subscriber_node *p=subscriber_exists(borrower_number,pas);

    if(!p)
    printf("\nWrong credentials");
    else
    issue_directly(p,book,date);

}