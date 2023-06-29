/* hw1.c */
#include <stdio.h>
#include <stdlib.h>

struct node { 
    int data; 
    struct node *next; 
}; 

typedef struct node Node; 

void createq(); 
void showfront(); 
void addq(int); 
void delq(); 
void showqueue(); 

Node *front, *rear; 

int main(void) { 
    int input, select; 

    createq(); 

    while(1) { 
        printf("\n\n�п�J�ﶵ(-1����)�G"); 
        printf("\n(1)���J�Ȧܦ�C"); 
        printf("\n(2)��ܦ�C�e��"); 
        printf("\n(3)�R���e�ݭ�"); 
        printf("\n(4)��ܩҦ����e"); 
        printf("\n"); 
        scanf("%d", &select); 
        
        if(select == -1) 
            break; 

        switch(select) { 
            case 1: 
                printf("\n��J�ȡG"); 
                scanf("%d", &input); 
                addq(input); 
                break; 
            case 2: 
                showfront(); 
                break; 
            case 3: 
                delq(); 
                break; 
            case 4: 
                showqueue(); 
                break; 
            default: 
                printf("\n�ﶵ���~�I"); 
        } 
    } 

    printf("\n"); 

    return 0; 
} 

void createq() { 
    front = rear = (Node*) malloc(sizeof(Node)); 
    front->next = rear->next = NULL; 
} 

void showfront(){ 
    if(front->next == NULL) 
        printf("\n��C���šI"); 
    else 
        printf("\n���ݭȡG%d", front->next->data); 
} 

void addq(int data) { 
    Node *newnode; 

    newnode = (Node*) malloc(sizeof(Node)); 

    if(front->next == NULL)  
        front->next = newnode; 
    
    newnode->data = data; 
    newnode->next = NULL; 
    rear->next = newnode; 
    rear = newnode; 
} 

void delq() { 
    Node* tmpnode; 

    if(front->next == NULL) { 
        printf("\n��C�w�šI"); 
        return; 
    } 

    tmpnode = front->next; 
    front->next = tmpnode->next; 
    free(tmpnode);    
} 

void showqueue() { 
    Node* tmpnode; 

    tmpnode = front->next; 

    printf("\n��C���e�G"); 
    while(tmpnode != NULL) { 
        printf("%d ", tmpnode->data); 
        tmpnode = tmpnode->next; 
    } 
} 
