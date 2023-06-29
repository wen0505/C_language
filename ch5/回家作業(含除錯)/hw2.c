/* hw2.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int year;
	printf("輸入年份: ");
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0) 
		printf("%d 是閏年", year);
    else 
		printf("%d 是平年", year);
	printf("\n");
    system("pause");
    return 0;
}
