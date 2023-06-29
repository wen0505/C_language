/* strucDebug3.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
    int score;
};
int main()
{
	struct student stu[3] = {{"Amy", 90}, {"Tina", 85}, {"Sam", 91}};
	int i;
   	printf("%-20s%-20s\n", "學生姓名", "學生成績");
   	printf("-------------------------\n");
	for (i=0; i<3; i++)
		printf("%-16s%-8d\n", stu[i].name, stu[i].score);
	printf("-------------------------\n");
    system("PAUSE");
    return 0;   	
}
