/* 加分題-十進位轉二進位 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int a;
	int b = 0;
	
	printf("輸入數字:");
	scanf("%d", &a);
	
	while(a>=1){
		b += (a%2)*i;
		a/=2;
		i=i*10;
	}
	
	printf("十進位轉二進位: %d\n", b);
	
	system("PAUSE");
	return 0;
}

