/* ioDebug6 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	int int_num;
	float float_num;
	double double_num;
	
	printf("�п�J�@�Ӧr��: ");
	scanf("%c", &ch);
	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &int_num);
	printf("�п�J�@��float�B�I��: ");
	scanf("%f", &float_num);
	printf("�п�J�@��double�B�I��: ");
	scanf("%lf", &double_num);
	
	printf("\n�z��J���r���� %c\n", ch);
	printf("�z��J����Ƭ� %d\n", int_num);
	printf("�z��J��float�B�I�Ƭ� %f\n", float_num);
	printf("�z��J��double�B�I�Ƭ� %lf\n", double_num);
	
	system("PAUSE");
	return 0;
}
