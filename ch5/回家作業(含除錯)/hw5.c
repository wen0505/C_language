/* hw5.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int gpa;
	printf("輸入某一同學的gpa: ");
    scanf("%d", &gpa);
    switch(gpa){
    	case 1 :
    		printf("score = 50");
    		break;
    	case 2 :
    		printf("satisfactory");
    		break;
    	case 3 :
    		printf("good student");	
    		break;
    	case 4 :
    		printf("excellent student");
    		break;
    	default:
    		printf("are you a fool or a genius");
    }
	printf("\n");
    system("pause");
    return 0;
}
