/* loopDebug4 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i = 1, total = 0;
	while (i <= 100){
		total += i;
		i++;
	}
	printf("整數1加到100的總和為%d\n", total); 
	system("PAUSE");
	return 0;
}
