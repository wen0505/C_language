/* hw2.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char msg[] = "I want";
    char str[] = "to eat";

   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",str);
   	strcpy(msg,str);
   	printf("\nString coping...\n");
   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",str);   
    
    system("PAUSE");
    return 0;	
}
