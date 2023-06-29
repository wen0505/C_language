/* ch8 init_2d.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aaa[2][4] = {{1,2,3,4},
		             {5,6,7,8}};
    int bbb[2][4] = {1,2,3,4,5,6};
	int ccc[2][4] = {{1,2,3},{4,5,6}};
	int ddd[][4] = {1,2,3,4,5,6,7,8};
	int i,j;
	
	printf("\nArray aaa[2][4]:\n");
	for (i=0; i<2; i++) {
		for (j=0; j<4; j++)
			printf("%5d",aaa[i][j]);
		printf("\n");		
	}
	
	printf("\nArray bbb[2][4]:\n");
	for (i=0; i<2; i++) {
		for (j=0; j<4; j++)
			printf("%5d",bbb[i][j]);
		printf("\n");		
	}	 
	
	printf("\nArray ccc[2][4]:\n");
	for (i=0; i<2; i++) {
		for (j=0; j<4; j++)
			printf("%5d",ccc[i][j]);
		printf("\n");		
	}

	printf("\nArray ddd[2][4]:\n");
	for (i=0; i<2; i++) {
		for (j=0; j<4; j++)
			printf("%5d",ddd[i][j]);
		printf("\n");		
	}
	
    system("PAUSE");
	return 0;	
}
