/* ex5.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, num1 = 0, num2 = 0, others = 0;
	printf("Enter a number (input 999 to exit): ");
	scanf("%d", &i);
	while(i != 999){
		switch(i){
			case 1:
			case 3:
			case 5:
			case 7:
			case 9:
				num1++;
				break;
			case 2:
			case 4:
			case 6:
			case 8:
				num2++;
				break;
			default:
				others++;
		}
		printf("Enter a number (input 999 to exit): "); 
		scanf("%d", &i);
	}
	printf("belongs to 1, 3, 5, 7, 9 have %d\n", num1); 
	printf("belongs to 2, 4, 6, 8 have %d\n", num2);
	printf("belongs to others have %d\n", others);
	system("PAUSE"); 
	return 0; 
}

