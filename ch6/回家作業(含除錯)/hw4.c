/* hw4 */ 
#include <stdio.h> 
#include <stdlib.h> 
#define N 20
int main( ) 
{     
	int i, k, a=0, b=0;	
	printf("叫块俱计:\n");
	for(i = 0; i < N; i++){
		scanf("%d",&k);
		if(k%2==0)
			a++;
		else 
			b++;
	}
	printf("计Τ%d\n案计Τ%d\n ",b,a); 
	
	system("PAUSE");
	return 0;
} 
