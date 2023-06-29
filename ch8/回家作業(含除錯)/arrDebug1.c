/* arrDebug1 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int arr[5] = {10, 20, 30, 40, 50}; 
	int i;
	printf("印出所有陣列元素 : ");
	for (i=0; i<=5; i++){
		printf("%d	", arr[i]);
	}
	printf("\n");
	system("PAUSE"); 
	return 0;
} 
