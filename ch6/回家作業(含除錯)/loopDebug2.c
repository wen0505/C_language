/* loopDebug2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i;
	for(i = 1; i <= 5; i++){
		printf("小明正在跑步...\n");
		printf("小明跑完了第%d圈\n", i);
	}
	printf("小明跑完了!!!\n"); 
	system("PAUSE");
	return 0;
}
