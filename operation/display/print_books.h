#pragma once

void print_book_direct(subscriber_node* p)
{
    if(p->number==0)
    {
        printf("\n %d) %s has not issued any book",p->borrower_number,p->name);
        return;//indicate book not found
    }

    printf("\n Books issued by %s are: ",p->name);

    for(int i=0;i<p->number;i++)
    printf("\n  %d) %s on %s",p->book[i]->accession_number,p->book[i]->title,p->date[i]);
}

void print_book(int borrower_number)
{
    subscriber_node *p=head_subscriber;

    printf("\n");

    while(p && p->borrower_number!=borrower_number)
    p=p->n;

    if(!p)
    printf("\n %d does not exists in the record",borrower_number);

    else
    print_book_direct(p);
    
}

void disp_avail_book()
{
    bool f=0;
    printf("\n\n Available books in the library are:-");
    
    book_node *p=head_book;

    while(p)
    {
        if(p->tag==0)
        {
            printf("\n  %d)%s",p->accession_number,p->title);
            f=1;
        }

        p=p->n;
    }

    if(!f)
    printf("\n  No books available");
}