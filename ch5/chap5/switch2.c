/* ch5 switch2.c */

#include <stdio.h>
#include<stdlib.h>

int main()
{
	char grade;

	printf("What's your score grade (A-E) ? ");
	scanf("%c",&grade);

	switch (grade){
		case 'A' :
	    case 'a' : printf("Score 90 to 100.\n");
		case 'B' :
		case 'b' : printf("Score 80 to 89.\n");

		case 'C' :
		case 'c' : printf("Score 70 to 79.\n");

		case 'D' :
		case 'd' : printf("Score 60 to 69.\n");

		case 'E' :
		case 'e' : printf("Score under 60.\n");

		default : printf("Wrong grade !\n");
	}

	system("PAUSE");
	return 0;
}
