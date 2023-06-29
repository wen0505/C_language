/* ex3 - selection sort program */
#include <stdio.h> 
#include <stdlib.h> 
void select_sort(int[], int);
int main() 
{ 
	int data[6] = {22, 9, 28, 36, 17, 6}; 
	int i;
	printf("Number : ");
	for (i = 0; i < 5; i++){
		printf("%d	", data[i]);
	}
	printf("\n");
	select_sort(data, 5);
	printf("Sorting : ");
	for (i = 0; i < 5; i++){
		printf("%d	", data[i]);
	}
	system("PAUSE"); 
	return 0;
} 

void select_sort(int data[], int n)
{
	int i, j, k, min, temp;
	for (i = 0; i < n-1; i++){
		min = i;
		for (j = i+1; j < n; j++)
			if (data[j] < data[min])
				min = j;	
		temp = data[min];
		data[min] = data[i];
		data[i] = temp;
		printf("Access : ");
		for (k = 0; k < n; k++){
			printf("%d	", data[k]);
		}
		printf("\n");
	}
}
