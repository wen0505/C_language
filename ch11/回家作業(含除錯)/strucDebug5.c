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
		printf("1. �[�J\n");
		printf("2. ���\n");
		printf("3. ���}\n");
		printf("*******\n");
		printf("�п��:\n");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				ptr = (struct student *)malloc(sizeof(struct student));
				printf("�п�J�m�W: ");
				scanf("%s", ptr->name);
				printf("�п�J����: ");
				scanf("%d", &ptr->score);
				head->next = ptr;
				ptr->next = head->next;
				break;
			case 2:
				current = head->next;
				printf("%-20s%-20s\n", "�ǥͩm�W", "�ǥͦ��Z");
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
