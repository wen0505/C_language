/* opeDebug2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num = 100;
	num += 100;
	printf("num加上100並指定給num後為 %d\n", num);
	num -= 100;
	printf("num減掉100並指定給num後為 %d\n", num);
	num *= 100;
	printf("num乘上100並指定給num後為 %d\n", num);
	num /= 100;
	printf("num除以100並指定給num後為 %d\n", num);
	system("PAUSE"); 
	return 0;
}
