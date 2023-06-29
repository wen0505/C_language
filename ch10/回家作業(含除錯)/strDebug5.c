/* strDebug5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{ 
	char str[] = "C language";
	int length = strlen(str);
	char str2[11];
	strcpy(str, str2);
	printf("str1 字串內容為 %s\n", str); 
	printf("str1 字串長度為 %d\n", length); 
	printf("str2 字串內容為 %s\n", str2); 
	system("PAUSE"); 
	return 0;
}
