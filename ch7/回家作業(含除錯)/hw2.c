/* hw2 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void a(int);
void b(int);
int main(void) {
	int number=0;
	printf("�п�J�@�ǼƦr: \n");
	while(number >= 0)
	{
		scanf("%d", &number);
		printf("\n");
		printf("��J�Ʀr��%d\n", number);
		a(number);
		b(number);
	}
	system("PAUSE");
	return 0;
}

void a(int num)
{
	if(num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
		printf("%d�O7��11��13������\n", num);
	else
		printf("%d���O7��11��13������\n", num);
}

void b(int num)
{
	printf("%d������ڬ�%f\n", num, sqrt(num));
}
