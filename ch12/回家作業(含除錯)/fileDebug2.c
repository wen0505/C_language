/* fileDebug2.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	FILE *fptr; 
	char name[50];
	int score_c;
	fptr = fopen("student.dat", "r");
	printf("©m¦W        C»y¨¥¦¨ÁZ\n"); 
	printf("=====================\n"); 
	while(fscanf(fptr, "%s %d", &name, &score_c) != EOF) {
		printf("%-8s %8d\n", name, score_c);
	}
	printf("=====================\n"); 
	fclose(fptr); 
	system("PAUSE"); 
	return 0; 
} 
