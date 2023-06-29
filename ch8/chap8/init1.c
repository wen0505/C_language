/* ch8 init1.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int init1[SIZE] = {10,20,30,40,50,
		               60,70,80,90,100};
    int i;
	
	printf("Array init1 :\n\n");
	for (i=0; i<SIZE; i++)
		printf(" init1[%d] ===> %d\n",i,init1[i]);
		
	system("PAUSE");
	return 0;	
}
