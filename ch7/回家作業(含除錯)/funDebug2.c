/* funDebug2.c */
#include <stdio.h> 
#include <stdlib.h> 
int sum(int, int);
int main() 
{ 
	int a = 5, b = 6, total;
	total = sum(a, b);
	printf("%d + %d = %d\n", a, b, total);
	system("PAUSE"); 
	return 0;
}

int sum(int a, int b)
{
	return a + b;		
}
