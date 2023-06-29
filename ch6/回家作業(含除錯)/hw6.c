/* hw6 */ 
#include <stdio.h> 
#include <stdlib.h> 
int main( ) 
{     
	int n, i = 2;
	printf("請輸入一些整數: \n");
	while(n >= 0){
		scanf("%d",&n);
		for(i = 2 ; i <= n-1 ; i++){
			if(n%i == 0){
				printf("%d不是質數\n", n);
				break;
			}
		}
		if(i == n){
			printf("%d是質數\n", n);
		}
	}
	system("PAUSE");
	return 0;
} 
