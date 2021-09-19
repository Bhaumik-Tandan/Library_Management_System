#pragma once

void get_cred(char *un,char *p)
{
    FILE *filePointer ;
    filePointer = fopen("./admin/login/credentials", "r") ;
    fscanf(filePointer,"%s %s",un,p);
}