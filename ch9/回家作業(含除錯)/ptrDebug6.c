/* ptrDebug6.c */
#include<stdio.h>
#include <stdlib.h>
int sum(int *, int, int);
int main( )
{
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int row = 2, col = 3;
	printf("將二維陣列arr加總後為 : %d\n", sum(*arr, row, col));
	system("PAUSE");
	return 0;
}

int sum(int *arr, int row, int col)
{
	int i, j, total = 0;
	for (i=0; i<row; i++)
		for (j=0; j<col; j++)
			total = total + arr[i] + arr[j];
	return total;
}
