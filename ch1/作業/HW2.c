/* HW2 */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int a=60, b=70, c=80, d=90, e=100;
	int total, average;
	
	printf("計概=%d, C語言=%d, 微積分=%d, 會計學=%d, 經濟學=%d\n", a, b, c, d, e);
	
	total = a+b+c+d+e;
	printf("總和=%d\n", total);
	
	average = total/5;
	printf("平均分數=%d\n", average);
	system("PAUSE");
	return 0;
}
