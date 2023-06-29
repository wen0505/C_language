/* Ch6 while99.c */

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;

	i = 1;
	while(i <= 9){
		j = 1;
		while (j <= 9){
			printf("%4d",i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	
	system("PAUSE");
	return 0;
}

