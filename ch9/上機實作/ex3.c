/* ex3 */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int a[] = {10, 11, 12, 13, 14};
	int *p[] = {a+1, a, a+2, a+4, a+3};
	int **pp = p;
	printf("*p[2] = %d\n", p[2]);
	printf("**pp = %d\n", **pp);
	printf("*(*(pp+2)+2) = %d\n\n", *(*(pp+2)+2));
	system("PAUSE");
	return 0;
}
