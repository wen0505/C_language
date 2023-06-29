/* ch3 ex4 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double f = 678.90;
	printf("%%f......|%f|\n", f);
	printf("%%3.2f......|%3.2f|\n", f);
	printf("%%7.2f......|%7.2f|\n", f);
	printf("%%7.0f......|%7.0f|\n", f);
	printf("%%*.1f......|%*.1f|\n", 7, f);
	printf("%%*.*f......|%*.*f|\n", 7, 1, f);
	
	system("PAUSE");
	return 0;
}
