/* hw1.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char msg[10] = "eat ";
    char str[10] = "cake";
   
   	printf("  Source string : <%s>\n", msg);
   	printf("    Dest string : <%s>\n", str);
   	strcat(msg, str);
   	printf("\nString concatenation...\n");
   	printf("  Source string : <%s>\n", msg);
   	printf("    Dest string : <%s>\n", str);

    system("PAUSE");
    return 0;   	
}
