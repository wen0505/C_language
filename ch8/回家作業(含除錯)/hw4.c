/* hw4 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, j, k;	
	int a[2][3] = {{2, 1, -3}, {-2, 2, 4}}; 
	int b[3][2] = {{-1, 2}, {0, -3}, {2, 1}}; 
	int c[2][2] = {0};
	
	printf("¯x°}a: \n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n¯x°}b: \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\n¯x°}c = ¯x°}a * ¯x°}b: \n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			for (k = 0; k < 3; k++){
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	system("PAUSE"); 
	return 0;
} 
