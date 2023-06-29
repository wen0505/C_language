/* ch3 width3.c */

#include<stdio.h>
#include <stdlib.h>

int main()
{
	double fl = 2.5e5;

	printf("|%15f|\n", fl);
	printf("|%-15.0f|\n", fl);
	printf("|%-#15.0f|\n", fl);

	printf("|%-15.4f|\n", fl);
	printf("|%-15.4e|\n", fl);
	
	system("PAUSE");
	return 0;
}
