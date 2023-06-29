/* ch8 init3.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int init3[] = {10,20,30,40,50,
	               60,70,80,90,100};
    int i;

	printf("Array init3 :\n\n");
	for (i=0; i < (sizeof init3 / sizeof (int)); i++)
		printf(" init3[%d] ===> %d\n",i,init3[i]);
	
	system("PAUSE");
	return 0;
}		
