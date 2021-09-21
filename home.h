#pragma once
#include "header_function.h"

void home()
{
    static int trial=1;
    #include "./password/header.h"
    #include "./admin/main.h"
    #include "./borrower/main.h"
    printf("\n\n1)Login as borrower\n2)Login as Admin\n3)Exit\nEnter your choice: ");
    int c;
    scanf("%d",&c);
    if(c==1)
    borrower();
    else if(c==2)
    admin();
}