/* poewr.c */
#include<stdio.h>
#include <stdlib.h>

int power(int a, int n);

main()
{    
    int i, a, n;
    
	printf("�п�Ja: ");
    scanf("%d", &a);
    printf("�п�Jn: ");
    scanf("%d", &n);
    
	for(i = 0; i <= n; i++)
		printf("%d^%d = %d\n", a, i, power(a, i));
		
    system("PAUSE");
}

int power(int a, int n)
{
	if (n == 0)
		return 1;
	else
		return (a*power(a, n-1));
}
