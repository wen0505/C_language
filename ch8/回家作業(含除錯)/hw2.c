/* hw2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int data[5] = {2, 4, 1, 2, 3}; 
	int i, input, x=0, y=0;
	printf("輸入學生C期中考選擇題的答案 : \n");
	for (i = 0; i <= 4; i++) {
		scanf("%d, ", &input);
		if (input == data[i]){
			x++;
		}
		else {
			y++;
		}
	}
	printf("\n正確答案: 2, 4, 1, 2, 3\n", x);
	printf("\n答對的題數為%d題\n", x);
	printf("答錯的題數為%d題\n", y);
	system("PAUSE"); 
	return 0;
} 
