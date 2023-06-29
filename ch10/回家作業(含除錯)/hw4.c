/* hw4 */
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void LtoS_sort(int[], int);
void StoL_sort(int[], int);
int main()
{
	int data[] = {0, 74, 52, 38, 19}; 
	int i;
    char str;
 
	printf("請輸入一參數: sort-");   
    scanf("%s", &str);
 
    switch(str)
    {
        case 'd':
            LtoS_sort(data, 5);
			printf("Large to Small Sorting : \n");
			for (i = 0; i < 5; i++){
				printf("%d	", data[i]);
			}
            break;
        case 'a':
            StoL_sort(data, 5);
			printf("Small to Large Sorting : \n");
			for (i = 0; i < 5; i++){
				printf("%d	", data[i]);
			}
            break;
        default:
            printf("No sort. \n");
    }
	
	printf("\n");
	
    system("PAUSE"); 
	return 0;
}

void LtoS_sort(int data[], int n){
	int i, j, k, temp;
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-1; j++){
			if (data[j] < data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;	
			}
		}
	}
}

void StoL_sort(int data[], int n){
	int i, j, k, temp;
	for (i = 0; i < n-1; i++){
		for (j = 0; j < n-1; j++){
			if (data[j] > data[j+1]){
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;	
			}
		}
	}
}
