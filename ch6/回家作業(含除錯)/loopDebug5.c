/* loopDebug5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i = 1, total = 0;
	do {
		total += i++;
	}while (i <= 100);
	printf("1�[��100���`�M��%d\n", total); 
	system("PAUSE");
	return 0;
}
