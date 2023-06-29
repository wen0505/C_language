/* ch5 goto3.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int left, right;
	int mid;
	char echo;

	printf("Choose a number (1-100) !\n");
	printf("  And I will guess it.\n");

	left = 1;
	right = 100;
		
	while (left <= right) {
		mid = (left + right) / 2;
		printf("\nYour number is %d.\n",mid);
		printf("Match, Greater, or Smaller ? ");
		scanf("%c",&echo);
		while(getchar() != '\n')
			;
        if(echo == 'M' || echo == 'm') {
			printf("I just know it !\n");
			break;
		}

		switch (echo){
		    case 'G' :
			case 'g' : right = mid - 1;
					   break;
			case 'S' :
			case 's' : left = mid + 1;
					   break;
		}
	}
	if(echo != 'M' && echo != 'm')
	    printf("You cheat me !\n");
	
	system("PAUSE");
	return 0;
}

