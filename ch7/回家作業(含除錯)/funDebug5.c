/* funDebug5.c */
#include <stdio.h> 
#include <stdlib.h> 
int count = 0;
void run();
int main() 
{ 
	run();
	system("PAUSE"); 
	return 0;
}

void run()
{
	/* �Q��k���p�����U�Өí�n�]��10�� */
	while (++count <= 10){	
		printf("�p�����b�]�޳�...\n");	
		printf("�p���]���� %d ��\n", count);
		run();
	}	
}
