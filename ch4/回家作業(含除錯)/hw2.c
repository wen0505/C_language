/* hw2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	float x, y, z, average;
	printf("輸入C程式的分數: ");
	scanf("%f", &x);
	printf("輸入微積分的分數: ");
	scanf("%f", &y);
	printf("輸入計概的分數: ");
	scanf("%f", &z);
	average = x*0.4 + y*0.3 + z*0.3;
	printf("平均分數: %f", average);
	system("PAUSE"); 
	return 0;
}
