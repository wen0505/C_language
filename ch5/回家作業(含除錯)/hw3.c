/* hw3.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int x;
	printf("��J�@���: ");
    scanf("%d", &x);
    if(x % 2 == 0 || x % 3 == 0 || x % 5 == 0) 
		printf("%d ��2�����ơB��3�����ơB��5������", x);
    else 
		printf("%d ����2�����ơB��3�����ơB��5������", x);
	printf("\n");
    system("pause");
    return 0;
}
