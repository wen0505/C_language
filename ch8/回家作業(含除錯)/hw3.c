/* hw3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, j;	
	int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
	int b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}}; 
	int c[3][3];
	printf("¯x°}a: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n¯x°}b: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n¯x°}c = ¯x°}a + ¯x°}b: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	system("PAUSE"); 
	return 0;
} 
