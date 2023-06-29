/* ptrDebug5.c */
#include<stdio.h>
#include <stdlib.h>
int sum(int *, int);
int main( )
{
	int arr[5] = {100, 110, 120, 130, 140};
	int max = 5;
	printf("陣列的總和為%d\n", sum(arr, max));
	system("PAUSE");
	return 0;
}

int sum(int *arr, int max)
{
	int total;
	int i;
	for (i=0; i<max; i++)
		total += arr[i];
	return total;
}
