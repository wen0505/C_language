/* ioDebug7 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour, min, sec;
	int year, month, days;
	
	printf("�п�J�{�b�ɶ� (hour, min, sec): ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf("\n�п�J���Ѥ�� (year, month, days): ");
	scanf("%d-%d-%d", &year, &month, &days);
	
	printf("�{�b�ɶ�:%d�I%d��%d��\n", hour, min, sec);
	printf("���Ѥ��:�褸%d�~%d��%d��\n", year, month, days);

	system("PAUSE");
	return 0;
}
