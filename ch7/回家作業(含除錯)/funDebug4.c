/* funDebug4.c */
#include <stdio.h> 
#include <stdlib.h> 
int number = 0;
void count();
int main() 
{ 
	while (number++ < 10)
	{
		count();
		printf("這是第 %d 次呼叫 count() 函數 \n", number);
	}
	system("PAUSE"); 
	return 0;
}

void count()
{
	number++;		
}
