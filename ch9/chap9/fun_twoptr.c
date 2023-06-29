/* ch9 fun_twoptr.c */

#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 4

void add(int, int (*a)[COL]);

int main()
{
	int i, j;
	int arr2[ROW][COL]={1,2,3,4,   
		                5,6,7,8};

	for (i=0; i< ROW; i++) {
		for(j=0; j< COL; j++) 
	        printf("%2d", arr2[i][j]);
		printf("\n");
	}

    add(ROW, arr2);

    printf("After adding ....\n");
	for (i=0; i< ROW; i++) {
		for(j=0; j< COL; j++)
		   printf("%2d", arr2[i][j]);
        printf("\n");
	}
	
	system("PAUSE");
    return 0;
}

void add(int size, int (*a)[COL])
{
	int i,j;
	for(i=0; i<size; i++)
		for(j=0; j<COL; j++) 
		    *(*(a+i)+j) += 1;
}

		    
