/* hw5 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	time_t T;
	srand(time(&T));
	int a, b, c, d, e, f;
 	a=(rand()%42)+1;
	b=(rand()%42)+1;
	c=(rand()%42)+1;
	d=(rand()%42)+1;
	e=(rand()%42)+1;
	f=(rand()%42)+1;
	int data[6] = {a, b, c, d, e, f}; 
	
	int i, input;
	printf("Enter a number to search : ");
	scanf("%d", &input);
	printf("Search.....\n");
	for (i = 0; i < 6; i++) {
		printf("Data when searching %2d time(s) is %d\n", i+1, data[i]);
		if (input == data[i])
			break;
	}
	if (i < 6){
		printf("Found, %d is the %dth record in data!\n", input, i+1);
	}
	else {
		printf("%d not found !\n", input);
	}
	system("PAUSE"); 
	return 0;
} 
