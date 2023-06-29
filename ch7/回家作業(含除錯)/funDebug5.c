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
	/* 想辦法讓小明停下來並剛好跑完10圈 */
	while (++count <= 10){	
		printf("小明正在跑操場...\n");	
		printf("小明跑完第 %d 圈\n", count);
		run();
	}	
}
