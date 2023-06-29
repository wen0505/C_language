/* hw5 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[10];
	int a, b, c;
	
	printf("請輸入您的學號: ");
	scanf("%s", &str);
	printf("請輸入您的平時考: ");
	scanf("%d", &a);
	printf("請輸入您的期中考: ");
	scanf("%d", &b);
	printf("請輸入您的期末考: ");
	scanf("%d", &c);
	
	printf("\n您的學號為 %s\n", str);
	printf("您的平時考為 %d 分\n", a);
	printf("您的期中考為 %d 分\n", b);
	printf("您的期末考為 %d 分\n", c);
	
	system("PAUSE");
	return 0;
}
