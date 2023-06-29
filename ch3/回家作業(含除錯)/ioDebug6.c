/* ioDebug6 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	int int_num;
	float float_num;
	double double_num;
	
	printf("請輸入一個字元: ");
	scanf("%c", &ch);
	printf("請輸入一個整數: ");
	scanf("%d", &int_num);
	printf("請輸入一個float浮點數: ");
	scanf("%f", &float_num);
	printf("請輸入一個double浮點數: ");
	scanf("%lf", &double_num);
	
	printf("\n您輸入的字元為 %c\n", ch);
	printf("您輸入的整數為 %d\n", int_num);
	printf("您輸入的float浮點數為 %f\n", float_num);
	printf("您輸入的double浮點數為 %lf\n", double_num);
	
	system("PAUSE");
	return 0;
}
