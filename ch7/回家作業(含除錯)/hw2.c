/* hw2 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void a(int);
void b(int);
int main(void) {
	int number=0;
	printf("請輸入一些數字: \n");
	while(number >= 0)
	{
		scanf("%d", &number);
		printf("\n");
		printf("輸入數字為%d\n", number);
		a(number);
		b(number);
	}
	system("PAUSE");
	return 0;
}

void a(int num)
{
	if(num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
		printf("%d是7或11或13的倍數\n", num);
	else
		printf("%d不是7或11或13的倍數\n", num);
}

void b(int num)
{
	printf("%d的平方根為%f\n", num, sqrt(num));
}
