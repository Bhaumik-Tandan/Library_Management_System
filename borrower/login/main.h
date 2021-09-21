#pragma once

void login()
{
    printf("\nEnter the borrower number: ");
    int bn;
    char *pas;
    scanf("%d",&bn);
    printf("Password: ");
    pas=pad('*');
    subscriber_node* b=subscriber_exists(bn,pas);

    if(!b)
    {
        trial++;
        if(trial>3)
        {
            printf("\nYou have exhausted all the limits");
            return;
        }

        #include "wrong.h"
        return wrong();
    }

    #include "../menu.h"
    menu(b);
}