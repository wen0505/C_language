/* ex3.c */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
int main() 
{ 
	FILE *fptr; 
	char str[81];
	fptr = fopen("c:\\str.dat", "w+");
	printf("write strings into file, and press double [enter] to quit\n"); 
	while(strlen(gets(str)) > 0) {
		fputs(str, fptr);
		fputs("\n", fptr);
	}
		
	rewind(fptr); 	
	printf("read strings from file\n");  
	while(fgets(str, 80, fptr) != NULL) 
		printf("%s", str);
	fclose(fptr); 
	system("PAUSE"); 
	return 0; 
} 
