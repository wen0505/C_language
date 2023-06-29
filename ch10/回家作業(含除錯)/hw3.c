/* hw3.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *msg1 = "dessert";
    char *msg2 = "DESSERT";
	int result;
	
	printf("Compare <%s> and <%s>, using stricmp\n", msg1, msg2); 
	result = stricmp(msg1, msg2);
	
	if (result == 0) 
		printf("<%s> equal to <%s>\n", msg1, msg2); 
	if (result < 0) 
		printf("<%s> less than <%s>\n", msg1, msg2); 
	if (result > 0) 
		printf("<%s> greater than <%s>\n", msg1, msg2);
   	
   	system("PAUSE");
    return 0;
}

