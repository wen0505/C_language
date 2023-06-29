/* hw1 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, j; 
	printf("九九乘法表:\n");
	printf("(a)\n");
	for(i=1; i <= 9; i++){
		for(j=1; j <= 9; j++){
			printf("%d*%d=%2d ", i, j, i*j); 
		}
		printf("\n");
	}
	
	printf("(b)\n");
	for(i=1; i <= 9; i++){
		for(j=1; j <= 9; j++){
			printf("%d*%d=%2d ", j, i, i*j); 
		}
		printf("\n");
	}
	
	system("PAUSE");
	return 0;
}
