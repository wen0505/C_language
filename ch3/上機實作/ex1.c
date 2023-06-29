/* ch3 ex1 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c = '$';
	printf("The original c is %c\n", c);
	printf("%%c......|%c|\n", c);
	printf("%%5c......|%5c|\n", c);
	printf("%%-5c......|%-5c|\n", c);
	
	system("PAUSE");
	return 0;
}
