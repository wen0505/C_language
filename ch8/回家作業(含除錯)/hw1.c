/* hw1 */
#include <stdio.h> 
#include <stdlib.h> 
void bubble_sort(int[], int);
int main() 
{ 
	int data[5] = {18, 2, 20, 34, 12}; 
	int i;
	printf("Number : ");
	for (i = 0; i < 5; i++){
		printf("%d	", data[i]);
	}
	printf("\n");
	bubble_sort(data, 5);
	printf("Sorting : ");
	for (i = 0; i < 5; i++){
		printf("%d	", data[i]);
	}
	system("PAUSE"); 
	return 0;
} 

void bubble_sort(int data[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-1; j++){
			if (data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;	
			}
		}
		printf("Access : ");
		for (k = 0; k < n; k++){
			printf("%d	", data[k]);
		}
		printf("\n");
	}
}
