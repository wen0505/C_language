/* selDebug2.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	
	int score = 90;
	if (score <= 60)
		score += 10; 
	else
		score += 5;
	printf("score = %d\n", score); 
	system("PAUSE"); 
	return 0; 
}
