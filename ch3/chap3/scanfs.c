/* ch3 scanfs.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
	double fl;
	char str[20];

	printf("Input two number :\n");
	scanf("%d %d", &num1, &num2);
	printf(" ===> %d + %d = %d\n\n", num1, num2, num1+num2);

	printf("Input a floating point :\n");
	scanf("%lf", &fl);
	printf(" ===> %f is %e\n\n", fl, fl);

    printf("Input a string :\n");
	scanf("%s", str);
	printf(" ===> %s \n\n", str);

	printf("Input at most 10 chars :\n");
	scanf("%10s", str);
	printf(" ===> %s\n", str);
	
	system("PAUSE");
	return 0;
}


