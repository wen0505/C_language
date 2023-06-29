/* hw7 */
#include <stdio.h> 
#include <stdlib.h> 
#define SIZE 10
void extern_funct(void); 
int ary[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int main() { 
	printf("extern function : \n"); 
	extern_funct(); 
	system("PAUSE"); 
	return 0;
} 

void extern_funct(void) { 
	extern int ary[SIZE]; 
	int i;
	for (i=0; i<SIZE; i++) 
		printf(" ary[%d] : %d\n",i , ary[i]); 
	printf("\n");
}      
