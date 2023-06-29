/* ex6 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, num; 
	for(i = 1; i <= 10; i++){
		printf("Please input a number: "); 
		scanf("%d", &num);
		if(num < 0)
			continue;
		printf("i = %d, num = %d\n", i, num);
	}
	system("PAUSE");
	return 0;
}
