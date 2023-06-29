/* ptrDebug3.c */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int arr[5] = {1, 3, 5, 7, 9};
	int arrLen = 5;
	int *ptr = arr;
	int i;
	printf("原陣列 : ");
	for (i=0; i<arrLen; i++)
		printf("%d ", *(ptr + i));
	printf("\n");
	printf("將所有陣列元素乘以10後 : ");
	for (i=0; i<arrLen; i++){
		*(ptr + i) *= 10;
		printf("%d ", *(ptr + i));
	}
	printf("\n");	
	system("PAUSE");
	return 0;
}
