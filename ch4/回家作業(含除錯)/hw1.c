/* hw1 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	float f, c;
	printf("輸入攝氏溫度: ", c);
	scanf("%f", &c);
	f = (float)9/5*c+32;
	printf("轉為華氏溫度: %f\n", f);
	system("PAUSE"); 
	return 0;
}
