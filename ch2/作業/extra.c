/* �[���D-�Q�i����G�i�� */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	int a;
	int b = 0;
	
	printf("��J�Ʀr:");
	scanf("%d", &a);
	
	while(a>=1){
		b += (a%2)*i;
		a/=2;
		i=i*10;
	}
	
	printf("�Q�i����G�i��: %d\n", b);
	
	system("PAUSE");
	return 0;
}

