/* ch1 outline.c */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int square(int);

int main()
{
	int i;
	int total;
	int square_total;

	total = 0;
	square_total=0;

	for(i=1; i<=MAX; i++){
		total += i;
	}
    square_total=square(total);

	printf("The sum of 1+2+...+10 is %d.\n",total);
	printf("Square of %d is %d.\n",total, square_total);
	
	system("PAUSE");
    return 0;
}

square (int value)
{
	return(value * value);
}
