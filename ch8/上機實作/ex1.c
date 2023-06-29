/* ex1 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num[50], index = 0, i; 
	do {
		printf("Enter a number (enter 0 to exit): ");
		scanf("%d", &num[index++]);
	} while(num[index-1] != 0 && index < 50);
	for (i = 0; i < index; i++){
		printf("%d	", num[i]);
	}
	system("PAUSE"); 
	return 0;
} 
