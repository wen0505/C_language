/* ch10 strncat.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *msg = "String concate";
    char dest[30] = "garbage ";
   
   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",dest);
   	strncat(dest,msg,6);
   	printf("\nString concating...\n");
   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",dest);
    
    system("PAUSE");
    return 0;   	
}
