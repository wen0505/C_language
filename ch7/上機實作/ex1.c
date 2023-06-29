/* ex1 */
#include <stdio.h> 
#include <stdlib.h> 
void print_star(int);
int main() 
{ 
	int i;
	printf("How many stars do you want ? ");
	scanf("%d", &i);
	print_star(i);
	printf("Mr. Bright Tsai is in Stanford university\n");
	print_star(i);
	system("PAUSE"); 
	return 0;
}

void print_star(int k)
{
	int i;
	for(i = 1; i <= k; i++)
		printf("*");
	printf("\n");		
}
