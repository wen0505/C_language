/* ch10 strcpy.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char msg[] = "String copy";
    char dest[30] = "garbage";

   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",dest);
   	strcpy(dest,msg);
   	printf("\nString coping...\n");
   	printf("  Source string : <%s>\n",msg);
   	printf("    Dest string : <%s>\n",dest);   
    
    system("PAUSE");
    return 0;	
}
