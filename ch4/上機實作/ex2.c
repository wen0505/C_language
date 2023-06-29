/* ex2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int x=2, y=4, z=8;
	int a, b, c, d;
	a = (x+y) * (x-z) / x;
	b = x - (y-z)*z + x;
	c = y/z+(--x);
	d = z-x+y*x;
	printf("x=%d, y=%d, z=%d\n", x, y, z);
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	system("PAUSE"); 
	return 0;
}
