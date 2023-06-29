/* ch3 formatg.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double d2=1234567.89;
	double d3=0.00005;
	double d4=123456.789;
	double d5=0.0005;
	
    printf("%f  %e   %g\n\n", d2, d2, d2);
	printf("%f  %e   %g\n\n", d3, d3, d3);
	printf("%f  %e   %g\n\n", d4, d4, d4);
	printf("%f  %e   %g\n\n", d5, d5, d5);
	
	system("PAUSE");
	return 0;
}

