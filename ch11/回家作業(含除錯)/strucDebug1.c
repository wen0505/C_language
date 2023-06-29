/* strucDebug1.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
    	char name[20];
    	int score;
};
int main()
{
	struct student stu = {"Frank", 80};
   	printf("此學生姓名 : %s\n", stu.name);
   	printf("此學生手機 : %d\n", stu.score);
    system("PAUSE");
    return 0;   	
}
