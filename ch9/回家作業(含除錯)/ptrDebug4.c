/* ptrDebug4.c */
#include<stdio.h>
#include <stdlib.h>
void swap(int *, int *);
int main( )
{
	int a = 10, b = 20;
	printf("a=%d, b=%d\n", a, b);
	printf("�մ�a�ܼƩMb�ܼƪ����e��...\n");
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	system("PAUSE");
	return 0;
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
