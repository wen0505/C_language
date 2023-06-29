/* selDebug7.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int choice = 1;
	switch (choice){
		case 1:
			printf("你是1號學生\n");  
			break;
		case 2:
			printf("你是2號學生\n");
			break;
		case 3:
			printf("你是3號學生\n"); 
			break;
		default:
			printf("你不是1~3號學生\n");
	}
	system("PAUSE"); 
	return 0; 
}
