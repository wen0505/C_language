/* hw3 */ 
#include <stdio.h> 
#include <stdlib.h> 
int main( ) 
{     
	int i = 1, total = 0;
	
	printf("�Q��while�p��\n");
	for (i = 1; i<=100; i++)
		total += i;
	printf("1 + 2 + 3 + ... + 100 = %d\n", total); 
	
	printf("�Q��do...while�p��\n");
	do {
		total += i;
		i++;
	}while (i<=100);
	printf("1 + 2 + 3 + ... + 100 = %d\n", total);
	
	printf("�Q��for�j��p��\n");
	while (i<=100) {
		total += i;
		i++;
	}     
	printf("1 + 2 + 3 + ... + 100 = %d\n", total);
	
	system("PAUSE"); 
	return 0;
} 
