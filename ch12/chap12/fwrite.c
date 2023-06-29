/* ch12 fwrite.c */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{ 
    FILE *fptr;
	struct node  {
		char name[10];
		int score;
	};
	struct node student;
	char scorebuf[81];
	if((fptr = fopen("c:\\temp\\student.rec", "wb")) == NULL)  {
		printf("Can\'t open file c:\\temp\\student.rec");
		exit(1);
	}
	do  {
		printf("\nEnter name: ");
		gets(student.name);
		printf("Enter score: ");
		student.score = atoi(gets(scorebuf));
		fwrite(&student, sizeof(student), 1, fptr);
		printf("One more(y/n)? ");
	} while(getche() == 'y');
	fclose(fptr);
	
	system("PAUSE");
    return 0;
}
