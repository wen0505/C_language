/* ex5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{ 
	char *str1 = "SAAB 95";
	char *str2 = "Saab 95";
	int result; 	
	result = stricmp(str1, str2);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result); 
	system("PAUSE"); 
	return 0;
}
