/* ex5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	unsigned char a=100, b=50;
	printf(" %d & %d = %d\n", a, b, a & b);
	printf(" %d | %d = %d\n", a, b, a | b);
	printf(" %d ^ %d = %d\n", a, b, a ^ b);
	printf(" ~%d = %d\n", a, ~a);
	printf(" %d >> 2 = %d\n", a, a >> 2);
	printf(" %d << 2 = %d\n", a, a << 2);
	system("PAUSE"); 
	return 0;
}
