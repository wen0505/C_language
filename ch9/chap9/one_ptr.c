/* ch9 one_ptr.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i[] = {100, 200, 300, 400, 500, 600};
	int *ptr = i;
	int value;
	
	value = *++ptr;
	printf("value is %d, *ptr = %d\n", value, *ptr);
	value = *ptr++;
	printf("value is %d, *ptr = %d\n", value, *ptr);
	value = ++*ptr;
	printf("value is %d, *ptr = %d\n", value, *ptr);
	
	system("PAUSE");
    return 0;
}
