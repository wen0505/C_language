/* HW1 */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int x=9, y=17;
	int hour, minute, second;
	
	hour = y-x;
	minute = hour*60;
	second = minute*60;
	
	printf("王先生一天共工作 %d 秒\n", second);
	system("PAUSE");
	return 0;
}
