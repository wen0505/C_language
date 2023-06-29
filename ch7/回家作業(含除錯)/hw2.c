/* hw2 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void a(int);
void b(int);
int main(void) {
	int number=0;
	printf("叫块ㄇ计: \n");
	while(number >= 0)
	{
		scanf("%d", &number);
		printf("\n");
		printf("块计%d\n", number);
		a(number);
		b(number);
	}
	system("PAUSE");
	return 0;
}

void a(int num)
{
	if(num % 7 == 0 || num % 11 == 0 || num % 13 == 0)
		printf("%d琌7┪11┪13计\n", num);
	else
		printf("%dぃ琌7┪11┪13计\n", num);
}

void b(int num)
{
	printf("%dキよ%f\n", num, sqrt(num));
}
