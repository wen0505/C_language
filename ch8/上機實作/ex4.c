/* ex4 - sequential search */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int data[6] = {26, 38, 15, 8, 25, 98}; 
	int i, input;
	printf("Data : ");
	for (i = 0; i < 6; i++){
		printf("%d	", data[i]);
	}
	printf("\n");
	printf("Enter a number to search : ");
	scanf("%d", &input);
	printf("Search.....\n");
	for (i = 0; i < 6; i++) {
		printf("Data when searching %2d time(s) is %d !\n", i+1, data[i]);
		if (input == data[i])
			break;
	}
	if (i < 6)
		printf("Found, %d is the %dth record in data!\n", input, i+1);
	else 
		printf("%d not found !", input);
	system("PAUSE"); 
	return 0;
} 
