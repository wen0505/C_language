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
		printf("�o�O�� %d ���I�s count() ��� \n", number);
	}
	system("PAUSE"); 
	return 0;
}

void count()
{
	number++;		
}
