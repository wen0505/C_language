/* ch4 mod.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int sec,min,hour;

	printf("Time conversion...\n\n");

	printf("How many seconds :\n    ===> ");
	scanf("%d",&sec);

	min = sec / 60;
	sec = sec % 60;

	hour = min / 60;
	min = min % 60;

	hour = hour % 24;

	printf("\n  %d hours, %d minutes, and %d seconds.\n",hour,min,sec);
	
	system("PAUSE");
	return 0;
}
