/* ch12 fread.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	struct node  {
		char name[10];
		int score;
	};
	struct node student;
	if((fptr = fopen("c:\\temp\\student.rec", "rb")) == NULL)  {
		printf("Can\'t open file c:\\temp\\student.rec");
		exit(1);
	}
	printf("name      score\n");
	printf("================\n");

	while(fread(&student, sizeof(student), 1, fptr) == 1)
		printf("%-10s %3d\n", student.name, student.score);
	fclose(fptr);

	system("PAUSE");
    return 0;
}
