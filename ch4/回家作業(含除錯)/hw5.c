/* hw5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int w, x, y, z;
	printf("輸入梯形的上底和下底和高:\n");
	scanf("%d %d %d", &w, &x, &y);
	z = (w+x)*y/2;
	printf("梯形面積: %d\n", z);
	system("PAUSE"); 
	return 0;
}
