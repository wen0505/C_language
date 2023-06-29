/* hw5 */ 
#include <stdio.h> 
#include <stdlib.h> 
int main( ) 
{     
	int i, sum=0; 
	for(i=2; i <= 100; i=i+2){
		sum += i;
		if(sum % 2 == 0)
			continue;
	}
	printf("偶數相加為%d\n", sum);
	system("PAUSE");
	return 0;
} 
