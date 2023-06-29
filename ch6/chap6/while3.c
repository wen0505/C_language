/* Ch6 while3.c */

#include<stdio.h>
#include <stdlib.h>
#define MAX 6

int main()
{
	int i;

	i = 0;
	while (++i <= MAX)
		printf("  %d\n",i);
		
	system("PAUSE");
	return 0;
}
