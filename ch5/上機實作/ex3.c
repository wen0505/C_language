/* ex3.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i = 1, a1 = 0, a3 = 0, a5 = 0, a7 = 0, a9 = 0, others = 0;
	printf("Enter a number (input 8888 to exit): ");
	scanf("%d", &i);
	while(i != 8888){
		if (i == 1)
			a1++; 
		else if (i == 3)
			a3++; 
		else if (i == 5)
			a5++; 
		else if (i == 7)
			a7++; 
		else if (i == 9)
			a9++; 
		else
			others++;
		printf("Enter a number (input 8888 to exit): ");
		scanf("%d", &i);
	}
	printf("a1 = %d, a3=%d, a5=%d, a7=%d, a9=%d\n", a1,a3,a5,a7,a9); 
	printf("others = %d\n", others);
	system("PAUSE"); 
	return 0; 
}
