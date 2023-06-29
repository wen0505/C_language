/* ex3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	char i; 
	for(i = 'a'; i <= 'z';){
		printf("%2c", i);
		i++;
	}
	printf("\n"); 
	system("PAUSE");
	return 0;
}
