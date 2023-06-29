/* arrDebug5 */
#include <stdio.h> 
#include <stdlib.h> 
void multiply(int[]);
int main() 
{ 
	int num[5] = {1, 3, 5, 7, 9}; 
	int i;
	multiply(num);
	printf("將每個元素乘以10後\n");
	for (i=0; i<5; i++){
		printf("num[%d]=%d\n", i, num[i]);
	}
	system("PAUSE"); 
	return 0;
} 

void multiply(int num[])
{
	int i;
	for (i=0; i<5; i++){
		num[i] *= 10;
	}
}
