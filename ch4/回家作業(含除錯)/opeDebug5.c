/* opeDebug5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num1 = 1, num2 = 2, num3 = 3;
	printf("num2 大於 num1 且 num2 大於 num3: %d\n", num2 > num1 & num2 > num3);
	printf("num1 大於 num2 或 num2 大於 num3: %d\n", num1 > num2 | num2 > num3);
	system("PAUSE"); 
	return 0;
}
