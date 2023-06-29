/* Calculate */
#include <stdio.h>
#include <stdlib.h>
int main (){
	int a=1, b=2, c=3;
	
	printf("a0=%d, b0=%d, c0=%d\n", a, b, c);
	c=b;
	b=a;
	printf("a1=%d, b1=%d, c1=%d\n", a, b, c);
	b=b+1;
	a=a*2;
	printf("a2=%d, b2=%d, c2=%d\n", a, b, c);
	system("PAUSE");
	return 0;
}
