/* ex8 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	char row, column; 
	
	for(row='A'; row <='G'; row++){
		for(column='G'; column >= row; column--)
			printf("%2c", column); 
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
