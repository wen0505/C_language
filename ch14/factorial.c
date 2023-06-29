/* factorial.c */
#include<stdio.h>
#include <stdlib.h>
int fact(int);

int main()
{    
    int i, n;
	printf("½Ð¿é¤Jnªº¶¥­¼: ");
    scanf("%d", &n);
	printf("\nFactorial...\n");
	for(i = 1; i <= n; i++)
		printf("%2d! = %-30u\n", i, fact(i));
    
    system("PAUSE");
    return 0;
}

int fact(int num)
{
	if (num == 0)
		return(1);
	return (num * fact (num-1));
}
