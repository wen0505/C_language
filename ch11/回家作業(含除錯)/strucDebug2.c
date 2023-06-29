/* strucDebug2.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
    	char name[30];
    	int score;
};
int main()
{
	struct student stu = {"John", 89};
	struct student *ptr = &stu;
   	printf("此學生的姓名是 %s\n", (*ptr).name);
   	printf("此學生的分數是 %d\n", (*ptr).score);
    system("PAUSE");
    return 0;   	
}
