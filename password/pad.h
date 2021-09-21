#pragma once

char* pad(char mask)
{
    #include "termite_stdin.h"
    char *password=(char*)(malloc(sizeof(char)));
    int i=0;
    char a[2];
    gets(a);
    terminate(0);
    while(1)
    {
        char c=getchar();
        if(c=='\n')
        break;
        password=realloc(password,sizeof(char)*(i+1));
        printf("\b*",mask);
        password[i++]=c;
    }
    terminate(1);
    return password;
}