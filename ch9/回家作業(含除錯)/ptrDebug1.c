/* ptrDebug1.c */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int num = 30;
	int *ptr;
	ptr = &num;
	printf("num的內容為%d\n", num);
	printf("透過ptr去取的num的值為%d\n", ptr);
	system("PAUSE");
	return 0;
}
