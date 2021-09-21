#pragma once

void login()
{
     #include "wrong_credential.h"
     #include "import_data.h"

    char file_username[30],file_password[30],un[30],*pas;
    get_cred(file_username,file_password);
    
    printf("\n Enter the login username: ");
    scanf("%s",un);

    printf("  Enter the Password: ");
    pas=pad('*');
    
    if(strcmp(un,file_username)!=0 || strcmp(pas,file_password)!=0)
    {
        trial++;
        printf("\n  Wrong Credentials");
        if(trial>3)
        {
            printf("\nYour Limit has been exceeded");
            return;
        }

       return wrong();
    }
    
    menu();
}