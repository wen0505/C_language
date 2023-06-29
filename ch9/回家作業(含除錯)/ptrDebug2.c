/* ptrDebug2.c */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int num = 30;
	int *ptr = &num;
	printf("num的值為%d\n", num);
	printf("透過ptr指標對num加上20\n");
	*ptr += 20;
	printf("num的值為%d\n", num);
	system("PAUSE");
	return 0;
}
