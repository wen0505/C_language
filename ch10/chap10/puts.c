/* ch10 puts.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lastname[20];
	char firstname[20];

	printf("please input your first name: ");
	gets(firstname);
	printf("please input your last name: ");
	gets(lastname);

   	puts("Your name is: ");
	printf("%s ", firstname);
	printf("%s\n", lastname);
	
	system("PAUSE");
    return 0;
}
