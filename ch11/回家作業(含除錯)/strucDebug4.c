/* strucDebug4.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
	int score;
	struct student *next;
};
int main()
{
    struct student stu1 = {"Mary", 95, NULL};
	struct student stu2 = {"Gina", 80, NULL};
	struct student *ptr;
	int i;
	stu1.next = &stu2;
	ptr = &stu1;
	printf("�Q��ptr�L�X�Ҧ����\n\n");
   	printf("%-20s%-20s\n", "�ǥͩm�W", "�ǥͦ��Z");
   	printf("-------------------------\n");
	while (ptr != NULL){
		printf("%-16s%-8d\n", ptr->name, ptr->score);
		*ptr = *ptr->next;
	}
	printf("-------------------------\n");
    system("PAUSE");
    return 0;   	
}
