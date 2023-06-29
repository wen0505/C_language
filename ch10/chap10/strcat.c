/* ch10 strcat.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *msg = "collection";
    char dest[30] = "Garbage ";
   
   	printf("  Source string : <%s>\n", msg);
   	printf("    Dest string : <%s>\n", dest);
   	strcat(dest, msg);
   	printf("\nString concatenation...\n");
   	printf("  Source string : <%s>\n", msg);
   	printf("    Dest string : <%s>\n", dest);

    system("PAUSE");
    return 0;   	
}
