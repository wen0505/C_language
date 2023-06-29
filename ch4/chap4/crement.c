/* ch4 crement */

#include<stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	int result;

	x = 3;
	y = 5;

	result = x * (y++);
	printf("result = %d  x = %d  y = %d\n",result,x,y);

	result = x * (++y);
	printf("result = %d  x = %d  y = %d\n",result,x,y);
	
	system("PAUSE");
	return 0;
}
