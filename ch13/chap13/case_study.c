/* ch13 case_study.c */
/* Using Visual C++ */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TRUE 1
#define TEMP_PERCENT    0.30
#define MID_PERCENT     0.30
#define FINAL_PERCENT   0.40

struct student {
    char id[8]; /* �Ǹ� */
    char name[10]; /* �m�W */
    double temp_score; /* ���ɦһP�@�~ */
    double mid_score; /* �����Ҥ��� */
    double final_score; /* �����Ҥ��� */
    struct student *next;
};

struct student  *head, *prev, *current, *ptrnew, *fdata_n;
FILE *fptr;
char fname[20];
void insert();
void del();
void query();
void modify();
void display();
void write();
double calaverage();

int main()
{
    char ch;
    int count = 0, flag = 0;
    head = (struct student *) malloc(sizeof(struct student ));
    head->next = NULL;

    while(TRUE) {
	    printf("\n*****************************************");
    	printf("\n* Type 'i' to enter new student's data  *");
	    printf("\n*      'd' to delete one student's data *");
        printf("\n*      'q' to query one student's data  *");
	    printf("\n*      'm' to modify one student's data *");
	    printf("\n*      'l' to list all students' data   *");
	    printf("\n*      'e' to exit program and save     *");
	    printf("\n*****************************************");
	    printf("\nplease enter your choice : ");

	    ch = tolower(getche());
	    switch(ch) {
	        case 'i' :
		        insert();
		        break;
	        case 'd' :
		        del();
		        break; 
		    case 'q':
                query();
                break;  
		    case 'm':
			    modify();
				break;
	        case 'l' :
		        display();
		        break;
	        case 'e' :
			    exit(0);
	        default  :
		        printf("\nPlease select one choice !\n");
        }
    }
    system("PAUSE");
    return 0;
}

/**** insert function ****/
void insert()
{
    ptrnew = (struct student *) malloc(sizeof(struct student ));

    /* head is always empty */
    /* add a node to list front */

    printf("\nEnter ID            : ");
    scanf("%s", ptrnew -> id);
    printf("Enter name          : ");
    scanf("%s", ptrnew -> name);
    printf("Enter Temp Score    : ");
    scanf("%lf", &ptrnew -> temp_score);
    printf("Enter Mid Score     : ");
    scanf("%lf", &ptrnew -> mid_score);
    printf("Enter Final Score   : ");
    scanf("%lf", &ptrnew -> final_score);

    /* insert algorithm */
    ptrnew->next = head->next;
    head->next = ptrnew;
}

/**** delete function ****/
void del()
{
    char id[8];
    double average;
    printf("\nWhat student ID do you want to delete ? ");
    scanf("%s", id);

    prev=head;
    current=head->next;
    while(current != NULL && strcmp(current->id, id) != 0) { 
	    prev=current;
	    current=current->next;
    }

    if(current == NULL) {
	    printf("Data not found\n");
	    return;
    } 
  
    printf("\n\n  �Ǹ�     �m�W       ���ɦһP�@�~  ");
    printf("������  ������  ��������");
    printf("\n  -------  ---------    ------------  ");
    printf("------  ------  --------\n");
    printf("  %-7s", current -> id);
    printf("  %-10s", current -> name);
    printf("  %-13.1f", current -> temp_score);
    printf("  %-6.1f", current -> mid_score);
    printf("  %-6.1f", current -> final_score);

    average = calaverage(current);
    printf("  %5.1f\n", average);

    printf("\nAre you sure to delete this record ? (Y/N) : ");
    if (toupper(getche()) == 'Y'){
    	prev->next=current->next;
        free(current);
  	    printf("\nRecord deleted.\n");
    }
    else
        printf("\nRecord not deleted.\n");
}

/**** query function *****/ 
void query()
{
	char id[8];
	double average;
	printf("\nWhich student ID do you want to query  ? ");
	scanf("%s", id);
	current=head->next;
	while(current != NULL && strcmp(current->id, id))
		current=current->next; 

	if(current ==NULL) {
		printf("Data is not found\n");
	    return;
    }
	printf("\n\n  �Ǹ�     �m�W        ���ɦһP�@�~  ");
	printf("������  ������  ��������");
    printf("\n  -------  ---------   ------------  ");
	printf("------  ------  --------\n");
    printf("  %-7s", current -> id);
	printf("  %-10s", current -> name);
	printf("  %-13.1f", current -> temp_score);
	printf("  %-6.1f", current -> mid_score);
	printf("  %-6.1f", current -> final_score);

    average = calaverage(current);
    printf("  %5.1f\n", average);
}

/*** midify function ****/
void modify()
{
	char id[8];
	printf("\nWhich student ID do you want to modify ? ");
	scanf("%s", id);
	current=head->next;
	while(current != NULL && strcmp(current->id, id))
		current=current->next; 

	if(current ==NULL) {
		printf("Data is not found\n");
	    return;
    }
	/* input new data */
    printf("\nEnter ID            : ");
    scanf("%s", current->id);
    printf("Enter name          : ");
    scanf("%s", current->name);
    printf("Enter Temp Score    : ");
    scanf("%lf", &current->temp_score);
    printf("Enter Mid Score     : ");
    scanf("%lf", &current->mid_score);
    printf("Enter Final Score   : ");
    scanf("%lf", &current->final_score);
}

/**** list function ****/
void display()
{
    double average;
    if(head -> next == NULL)
	    printf("\n list is empty\n");
    else {
       	printf("\n\n  �Ǹ�     �m�W        ���ɦһP�@�~  ");
		printf("������  ������  ��������");
    	printf("\n  -------  ---------   ------------  ");
		printf("------  ------  --------\n");
        current = head->next;
	    while(current != NULL){
	        printf("  %-7s", current -> id);
	        printf("  %-10s", current -> name);
	        printf("  %-13.1f", current -> temp_score);
	        printf("  %-6.1f", current -> mid_score);
	        printf("  %-6.1f", current -> final_score);

            average = calaverage(current);

  	        printf("  %5.1f\n", average);
		    current = current -> next;
	    }
    }
}

double calaverage(struct student *current)
{
	double avg;
	
	avg = current -> temp_score    * TEMP_PERCENT    +
 	      current -> mid_score     * MID_PERCENT     +
		  current -> final_score   * FINAL_PERCENT;

	return avg;
}

