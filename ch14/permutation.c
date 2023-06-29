/* permutation.c */
#include <stdio.h>
#include <stdlib.h>

void Perm(char list[], int i, int n);
void swap(char *i, char *j);

main(){
	int i, n;
	char list[50];
	printf("請輸入排序文字個數:");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		list[i] = 'a' + i - 1;	
	Perm(list, 1, n);
	
	system("PAUSE");
	return 0;
}

void Perm(char list[], int i, int n){ // list[i] ~ list[n] permutation
	int j;
	if(i == n){
		for(j = 1; j <= n; j++){
			printf("%c ", list[j]);
		}
		printf("\n");
	}
	else{ // i < n
		for(j = i; j <= n; j++){
			swap(&list[i], &list[j]); // list[j] as head
			Perm(list, i+1, n); // list[i+1] ~ list[n] permutation
			swap(&list[i], &list[j]); // return to the original list
		}
	}
}

void swap(char *i, char *j){
	char t;
	t = *i;
	*i = *j;
	*j = t;
}
