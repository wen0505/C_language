/* ex2.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () 
{ 
	char *msg = "Saab 93";
	char dest[30] = "SAAB 95 Aero "; 
	
	strcpy(dest, msg);
	printf("\nMy car is... %s\n", dest); 
	strncpy(dest, msg, 4);
	printf("\nMy car is... %s\n", dest); 
	system("PAUSE"); 
	return 0;
}
