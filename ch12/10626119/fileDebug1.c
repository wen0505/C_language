/* fileDebug1.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	FILE *fptr; 
	char name[50];
	int score_c;
	fptr = fopen("student.dat", "w");
	printf("��J���Z��0, �{���N����\n"); 
	printf("�п�J�m�W: "); 
	scanf("%s", name);
	printf("�п�JC�y�����Z: "); 
	scanf("%d", &score_c);
	while(score_c != 0) {
		fprintf(fptr, "%s %d", name, score_c);
		printf("�п�J�m�W: "); 
		scanf("%s", name);
		printf("�п�JC�y�����Z: "); 
		scanf("%d", &score_c);
	}
	fclose(fptr); 
	system("PAUSE"); 
	return 0; 
} 
