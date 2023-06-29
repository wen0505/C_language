/* fileDebug1.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	FILE *fptr; 
	char name[50];
	int score_c;
	fptr = fopen("student.dat", "w");
	printf("輸入成績為0, 程式將結束\n"); 
	printf("請輸入姓名: "); 
	scanf("%s", name);
	printf("請輸入C語言成績: "); 
	scanf("%d", &score_c);
	while(score_c != 0) {
		fprintf(fptr, "%s %d", name, score_c);
		printf("請輸入姓名: "); 
		scanf("%s", name);
		printf("請輸入C語言成績: "); 
		scanf("%d", &score_c);
	}
	fclose(fptr); 
	system("PAUSE"); 
	return 0; 
} 
