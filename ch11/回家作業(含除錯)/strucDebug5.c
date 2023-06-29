/* strucDebug5.c */
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[20];
	int score;
	struct student *next;
};
int main()
{
    int choice = 0;
	struct student *head;
	struct student *ptr;
	struct student *current;
	head = (struct student *)malloc(sizeof(struct student));
	head->next = NULL;
	while (choice != 3){
		printf("*******\n");
		printf("1. 加入\n");
		printf("2. 顯示\n");
		printf("3. 離開\n");
		printf("*******\n");
		printf("請選擇:\n");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				ptr = (struct student *)malloc(sizeof(struct student));
				printf("請輸入姓名: ");
				scanf("%s", ptr->name);
				printf("請輸入分數: ");
				scanf("%d", &ptr->score);
				head->next = ptr;
				ptr->next = head->next;
				break;
			case 2:
				current = head->next;
				printf("%-20s%-20s\n", "學生姓名", "學生成績");
				printf("-------------------------\n");
				while (current != NULL){
					printf("%-16s%-8d\n", current->name, current->score);
					current->next = current;
				}
				printf("-------------------------\n");
				break;		
		}
	}
    system("PAUSE");
    return 0;   	
}
