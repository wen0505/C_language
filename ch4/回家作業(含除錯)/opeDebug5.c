/* opeDebug5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num1 = 1, num2 = 2, num3 = 3;
	printf("num2 �j�� num1 �B num2 �j�� num3: %d\n", num2 > num1 & num2 > num3);
	printf("num1 �j�� num2 �� num2 �j�� num3: %d\n", num1 > num2 | num2 > num3);
	system("PAUSE"); 
	return 0;
}
