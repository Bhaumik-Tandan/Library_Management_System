#pragma once

void disp_borrower()
{
    bool f=0;
    printf("\n\n Borrowers in the library are:-");
    
    subscriber_node *p=head_subscriber;

    while(p)
    {
        printf("\n  %d)%s",p->borrower_number,p->name);
        f=1;
        p=p->n;
    }

    if(!f)
    printf("\n  No borrowers available");
}

void issued_book()
{
    int bn;
    printf("\nEnter the borrower number: ");
    scanf("%d",&bn);
    print_book(bn);    
}