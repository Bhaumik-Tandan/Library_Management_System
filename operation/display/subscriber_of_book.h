#pragma once


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
    printf("\n  No borrowers found");
}

