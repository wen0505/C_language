/* ex6.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int i = 0;
	while(i < 3){
		switch(++i){
			case 0: printf("Hello, world"); 
			case 1: printf("Hello, world"); 
			case 2: printf("Hello, world"); 
			default: printf("Oh Yes"); 
		}
		printf("\n"); 
	}
	system("PAUSE"); 
	return 0; 
}
