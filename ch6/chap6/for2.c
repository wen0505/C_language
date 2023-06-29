/* Ch6 for2.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int item;
	int num;

	item = 1;
	printf("     Number	      Square\n\n");

	for(num=1; num*num<500; num+=4){
		printf("%d.",item++);
		printf("	%2d		%4d\n",num,num*num);
	}
	
	system("PAUSE");
	return 0;
}
