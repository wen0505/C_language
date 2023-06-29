/* hw4.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int gpa;
	printf("輸入某一同學的gpa: ");
    scanf("%d", &gpa);
    if(gpa == 1) 
		printf("score = 50");
    else if(gpa == 2) 
		printf("satisfactory");
    else if(gpa == 3) 
		printf("good student");	
	else if(gpa == 4) 
		printf("excellent student");	
	else 
		printf("are you a fool or a genius");
	printf("\n");
    system("pause");
    return 0;
}
