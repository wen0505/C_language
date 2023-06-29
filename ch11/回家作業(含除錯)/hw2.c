/* hw2.c */
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data; //���|��ƪ��ŧi 
	struct Node *next;  //���|���Ψӫ��V�U�@�Ӹ`�I 
};
typedef struct Node Stack_Node; //�w�q���|���`�I���s�κA
typedef Stack_Node *Linked_Stack;  //�w�q��C���|���s�κA
Linked_Stack top=NULL; //���V���|���ݪ����� 
int isEmpty();
void push(int); 
int pop();
 
int main(int argc, char *argv[]) {
	int value;
	int i;
	printf("�Ш̧ǿ�J10�����:\n");
	for(i=0;i<10;i++){
		scanf("%d",&value);
		push(value);
	}
	printf("====================\n");
	while(!isEmpty()){
		printf("���|�u�X�����Ǭ�:%d\n",pop()); 
	}
	pop();
	return 0;
}
/*�P�_�O�_���Ű��|*/
int isEmpty(){
	if(top==NULL){
		return 1; 
	}else{
		return 0;
	}
} 
/*�N���w����Ʀs�J���|*/
void push(int data){
	Linked_Stack new_add_node;  //�s�[�J�`�I������
	/*�t�m�s�`�I���O����*/
	new_add_node=(Linked_Stack)malloc(sizeof(Stack_Node));
	new_add_node->data=data;  //�N�ǤJ���ȳ]���`�I�����e 
	new_add_node->next=top;   //�N�s�`�I���V���|���I�� 
	top=new_add_node;  //�s�`�I�������|������ 
} 
/*�q���|���X���*/
int pop(){
	Linked_Stack ptr;  //���V���|���ݪ�����
	int temp;
	if(isEmpty()){
		printf("���|����\n");
		return -1;
	}else{
		ptr=top;  //���V���|������
		temp=ptr->data; //���X���|���
		top=top->next; //�N���|���ݪ����Ы��V�U�@�Ӹ`�I 
		free(ptr); //�N�`�I�e�Ϊ��O��������
		return temp; 
	}
}
