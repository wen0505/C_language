/* hw4 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int x, y, z;
	printf("輸入三角形的底和高:\n");
	scanf("%d %d", &x, &y);
	z = x*y/2;
	printf("三角形面積: %d\n", z);
	system("PAUSE"); 
	return 0;
}
