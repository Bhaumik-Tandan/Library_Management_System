#pragma once

void wrong()
{
    printf("\n\n1)Try again\n2)Go to home\n3)Exit\nEnter your choice: ");
    int c;

    scanf("%d",&c);

    if(c<1 || c>2)
    return;
    
    if(c==1)
    admin();

    else
    home();
}