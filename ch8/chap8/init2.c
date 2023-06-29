/* ch8 init2.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int init2[SIZE] = {10,20,30,40,50,
		               60,70};
    int i;
	
	printf("Array init2 :\n\n");
	for (i=0; i<SIZE; i++)
		printf(" init2[%d] ===> %d\n",i,init2[i]);
	
	system("PAUSE");
	return 0;	
}
