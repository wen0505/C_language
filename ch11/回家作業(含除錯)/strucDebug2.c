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
   	printf("���ǥͪ��m�W�O %s\n", (*ptr).name);
   	printf("���ǥͪ����ƬO %d\n", (*ptr).score);
    system("PAUSE");
    return 0;   	
}
