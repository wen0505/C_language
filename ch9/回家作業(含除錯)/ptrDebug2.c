/* ptrDebug2.c */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int num = 30;
	int *ptr = &num;
	printf("num���Ȭ�%d\n", num);
	printf("�z�Lptr���й�num�[�W20\n");
	*ptr += 20;
	printf("num���Ȭ�%d\n", num);
	system("PAUSE");
	return 0;
}
