/* funDebug3.c */
#include <stdio.h> 
#include <stdlib.h> 
int square(int);
int main() 
{ 
	int num = 5;
	printf("%d 的平方為 %d\n", num, square(num));
	system("PAUSE"); 
	return 0;
}

int square(int num)
{
	return num * num;		
}
