/* ptrDebug1.c */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int num = 30;
	int *ptr;
	ptr = &num;
	printf("num�����e��%d\n", num);
	printf("�z�Lptr�h����num���Ȭ�%d\n", ptr);
	system("PAUSE");
	return 0;
}
