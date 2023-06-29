/* ioDebug7 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hour, min, sec;
	int year, month, days;
	
	printf("請輸入現在時間 (hour, min, sec): ");
	scanf("%d:%d:%d", &hour, &min, &sec);
	printf("\n請輸入今天日期 (year, month, days): ");
	scanf("%d-%d-%d", &year, &month, &days);
	
	printf("現在時間:%d點%d分%d秒\n", hour, min, sec);
	printf("今天日期:西元%d年%d月%d日\n", year, month, days);

	system("PAUSE");
	return 0;
}
