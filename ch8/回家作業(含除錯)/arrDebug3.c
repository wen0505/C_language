/* arrDebug3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num[3][2]; 
	int i, j;
	for (i=0; i<3; i++){
		for (j=0; j<2; j++){
			printf("�п�Jnum[%d][%d]: ", i, j);
			scanf("%d", &num[i][j]);
		}
	}
	printf("\n�L�X�}�Cnum���Ҧ�����\n");
	for (i=0; i<3; i++){
		for (j=0; j<2; j++){
			printf("num[%d][%d]=%d\n", i, j, num[i][j]);
		}
	}
	system("PAUSE"); 
	return 0;
} 
