/* hw4 */ 
#include <stdio.h> 
#include <stdlib.h> 
#define N 20
int main( ) 
{     
	int i, k, a=0, b=0;	
	printf("請輸入整數:\n");
	for(i = 0; i < N; i++){
		scanf("%d",&k);
		if(k%2==0)
			a++;
		else 
			b++;
	}
	printf("奇數有%d個\n偶數有%d個\n ",b,a); 
	
	system("PAUSE");
	return 0;
} 
