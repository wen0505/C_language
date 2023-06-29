/* hw3.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int x;
	printf("块俱计: ");
    scanf("%d", &x);
    if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0) 
		printf("%d 2计┪3计┪5计", x);
    else 
		printf("%d ぃ2计┪3计┪5计", x);
	printf("\n");
    system("pause");
    return 0;
}
