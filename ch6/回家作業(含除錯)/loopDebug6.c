/* loopDebug6 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, j; 
	printf(" �E�E���k��:\n");
	for(i=1; i <=9; i++){
		for(j=1; j <= 9; j++){
			printf("%d*%d=%2d ", i, j, i*j); 
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
