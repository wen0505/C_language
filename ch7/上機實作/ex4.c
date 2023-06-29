/* ex4 */
#include <stdio.h> 
#include <stdlib.h> 
void stat_ai();
int main() 
{ 
	int i;
	for(i = 1; i <= 5; i++)
		stat_ai();
	system("PAUSE"); 
	return 0;
}

void stat_ai()
{
	int ai = 1;
	static int si = 1;
	printf("ai = %d\n", ai++);
	printf("si = %d\n\n", si++);		
}
