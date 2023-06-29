/* Ch6 while4.c */

#include <stdio.h>
#include <stdlib.h>
#define MAX 6
 
int main()
{
	int i;

	i = 1;
	while (i <= MAX)
		printf("  %d\n",i);
		i++;
		
	system("PAUSE");
	return 0;
}
