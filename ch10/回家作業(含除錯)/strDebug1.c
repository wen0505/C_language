/* strDebug1.c */
#include <stdio.h>
#include <stdlib.h>
int main () 
{ 
	char str[10];
	printf("請輸入一字串: "); 
	scanf("%s", str);
	printf("您輸入的字串為 %s\n", str); 
	system("PAUSE"); 
	return 0;
}
