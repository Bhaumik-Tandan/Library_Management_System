#pragma once

void wrong()
{
    printf("\nWrong Credentials");
    printf("\n1)Try again\n2)Sign up\n3)Go to home page\n4)Exit\nEnter your choice: ");
    int c;
    scanf("%d", &c);
    void (*switch_wrong[3])();
    if(c<1 || c>3)
    return;

    switch_wrong[0]=login;

    #include "../../add/borrower.h"
    switch_wrong[1]=borrower;
    switch_wrong[2]=home;
    switch_wrong[c-1]();
}