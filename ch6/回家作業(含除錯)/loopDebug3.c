/* loopDebug3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i, total=0;
	for(i = 1; i <= 100; i++){
		total += i;
	}
	printf("1加到100的總和為%d\n", total); 
	system("PAUSE");
	return 0;
}
