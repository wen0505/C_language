/* hw2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int data[5] = {2, 4, 1, 2, 3}; 
	int i, input, x=0, y=0;
	printf("��J�ǥ�C�����ҿ���D������ : \n");
	for (i = 0; i <= 4; i++) {
		scanf("%d, ", &input);
		if (input == data[i]){
			x++;
		}
		else {
			y++;
		}
	}
	printf("\n���T����: 2, 4, 1, 2, 3\n", x);
	printf("\n���諸�D�Ƭ�%d�D\n", x);
	printf("�������D�Ƭ�%d�D\n", y);
	system("PAUSE"); 
	return 0;
} 
