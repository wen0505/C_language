/* hw5 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str[10];
	int a, b, c;
	
	printf("�п�J�z���Ǹ�: ");
	scanf("%s", &str);
	printf("�п�J�z�����ɦ�: ");
	scanf("%d", &a);
	printf("�п�J�z��������: ");
	scanf("%d", &b);
	printf("�п�J�z��������: ");
	scanf("%d", &c);
	
	printf("\n�z���Ǹ��� %s\n", str);
	printf("�z�����ɦҬ� %d ��\n", a);
	printf("�z�������Ҭ� %d ��\n", b);
	printf("�z�������Ҭ� %d ��\n", c);
	
	system("PAUSE");
	return 0;
}
