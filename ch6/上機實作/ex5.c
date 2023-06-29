/* ex5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, total = 0; 
	for(i = 1; ++i <= 100;)
		total += i;
	printf("total = %d, i = %d\n", total, i); 
	system("PAUSE");
	return 0;
}
