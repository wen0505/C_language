/* selDebug4.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int score = 70;
	if (score >= 60)
		printf("耶!!!及格了\n"); 
	else if (score >= 80)
		printf("耶!!!考高分!!!\n"); 
	else
		printf("不及格...需要再加強!!!\n"); 
	system("PAUSE"); 
	return 0; 
}

