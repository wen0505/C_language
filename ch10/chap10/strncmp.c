/* ch10 strncmp.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *str1="Porsche Cayenne";
    char *str2="Porsche Cayenne Turbo";
	int result;

	result=strcmp(str1, str2);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result);

	result=strncmp(str1, str2, 15);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result);
	
	system("PAUSE");
    return 0;
}
