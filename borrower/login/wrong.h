#pragma once

void wrong(int bn)
{
    printf("\nWrong Credentials");
    printf("\n1)Try again\n2)Sign up\n3)Go to home page\n4)Exit\nEnter your choice: ");
    int c;
    scanf("%d", &c);

    #include "../operation/add_borrower.c"
    if(c==1)
    login();
    else if(c==2)
    add_borrower(bn);
    else if(c==3)
    home();
}