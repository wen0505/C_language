/* hw2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, j; 
	printf("(a)\n");
	for(i=1; i <= 5; i++){
		for(j=1; j <= i; j++){
			printf("*"); 
		}
		printf("\n");
	}
	for(i=1; i <= 5; i++){
		for(j=1; j <= 5-i; j++){
			printf("*"); 
		}
		printf("\n");
	}
	
	printf("(b)\n");
	for(i=1; i <= 5; i++){
		for(j=i; j <= 5; j++){
			printf("*"); 
		}
		printf("\n");
	}
	for(i=1; i <= 5; i++){
		for(j=0; j <= i; j++){
			printf("*"); 
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}
