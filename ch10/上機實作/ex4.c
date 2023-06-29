/* ex4.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{ 
	char *str1 = "SAAB 95 Aero";
	char *str2 = "SAAB 95";
	int result; 	
	result = strcmp(str1, str2);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result); 
	
	result = strncmp(str1, str2, 4);
	printf("strncmp(%s, %s) = %d\n", str1, str2, result); 
	system("PAUSE"); 
	return 0;
}
