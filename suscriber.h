#pragma once

subscriber_node* subscriber_exists(int borrower_number,char password[30])
{
    subscriber_node *p=head_subscriber;

    while(p && !(p->borrower_number==borrower_number && strcmp(p->password,password)==0))
    p=p->n;

    return p;
}

void add_subscriber(char name[30],int borrower_number,char password[30])
{
    subscriber_node *t=(subscriber_node*)malloc(sizeof(subscriber_node));
    strcpy(t->name,name);
    t->borrower_number=borrower_number;
    strcpy(t->password,password);
    t->number=0;
    t->n=0;

    if(!head_subscriber)
    {
        head_subscriber=t;
        printf("\n Borrower %s with borrower number %d added",name,borrower_number);
        return;
    }

     subscriber_node *p=head_subscriber;

    while(p->n)
    if(p->borrower_number==borrower_number)//check if the borrower number is unique or not
    {
        printf("\n Borrower number %d already exists with %s",borrower_number,p->name);
        return;
    }
    else
    p=p->n;

    if(p->borrower_number==borrower_number)
    {
        printf("\n Borrower number %d already exists with %s",borrower_number,p->name);
        return;
    }

    printf("\n Borrower %s with borrower number %d added",name,borrower_number);

    p->n=t;
}
