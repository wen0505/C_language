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
   	printf("���ǥͩm�W : %s\n", stu.name);
   	printf("���ǥͤ�� : %d\n", stu.score);
    system("PAUSE");
    return 0;   	
}
