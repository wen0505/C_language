/* strDebug6.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{ 
	char str1[] = "Apple's";
	char str2[] = " MAC";
	strcat(str1, str2);
	printf("將str1字串和str2字串連接後: %s\n", str1); 
	system("PAUSE"); 
	return 0;
}
