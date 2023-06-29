/* ex9.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int x = 100, y = 200, ans;
	ans = (x > y) ? x : y; 
	printf("%d\n", ans); 
	ans = (x < y) ? x : y; 
	printf("%d", ans); 
	system("PAUSE"); 
	return 0; 
}
