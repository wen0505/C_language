/* arrDebug4 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
	int i, total=0;
	for (i=0; i<10; i++){
		total = total + arr[i];
	}
	printf("陣列的總和為%d\n", total);
	system("PAUSE"); 
	return 0;
} 
