/* ex2 */
#include<stdio.h>
#include <stdlib.h>
int main( )
{
	int a[] = {1, 2, 3, 4, 5};
	int *ptr = a;
	printf("ptr[0] = %d\n", ptr[0]);
	printf("ptr[-1] = %d\n", ptr[-1]); /* output darbage value */
	printf("ptr[1] = %d\n\n", ptr[1]);
	
	ptr = a + 1;
	printf("ptr[0] = %d\n", ptr[0]);
	printf("ptr[-1] = %d\n", ptr[-1]);
	printf("ptr[1] = %d\n\n", ptr[1]);
	system("PAUSE");
	return 0;
}
