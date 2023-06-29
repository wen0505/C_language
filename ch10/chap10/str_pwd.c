/* ch10 str_pwd.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWD "ANSI C"
#define TRUE 1
#define FALSE 0

int main()
{
    char passwd[80];
    int ok,try;
   
    ok = FALSE;
    try = 1;
      
    do {
        printf("%d. Enter your password : ",try++);
      	gets(passwd);
      	if (!strcmp(passwd,PASSWD))
      	    ok = TRUE;
    } while (!ok && (try <= 3));
      
    if (ok)
        printf("\nCongratulations !\n");
    else
        printf("\nYou are rejected !\n");
    
    system("PAUSE");
    return 0;
}
