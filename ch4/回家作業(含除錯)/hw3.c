/* hw3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	float a, b, c, d, e, average;
	printf("平時作業: ");
	scanf("%f", &a);
	printf("期中考: ");
	scanf("%f", &b);
	printf("期末考: ");
	scanf("%f", &c);
	printf("平時考: ");
	scanf("%f", &d);
	printf("上機測試: ");
	scanf("%f", &e);
	average = a*0.2 + b*0.2 + c*0.25 + d*0.15 + e*0.2;
	printf("C語言的分數: %f", average);
	system("PAUSE"); 
	return 0;
}
