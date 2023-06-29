/* ch4 ambigu.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 5;
	int num1 = 5;
	int num2 = 5;
	int num3 = 5;
	int num4 = 5;
	
	printf("Ambiguous style...\n\n");

	printf("	%d	%d\n",num1,num1++);
	printf("	%d	%d\n",num2,++num2);
	printf("	%d	%d\n",++num3,num3);
	printf("	%d	%d\n",num4++,num4);

	printf("\nnum1 = %d num2 = %d num3 = %d num4 = %d\n",num1,num2,num3,num4);

	printf("\n	%d  %d\n",++num,++num);
	printf("\nnum = %d\n",num);

	system("PAUSE");
	return 0;
}
