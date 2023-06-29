/* Quick sort.c */
#include <stdio.h>
#include <stdlib.h>
#define swap(x,y) {int t; t = x; x = y; y = t;} 

int partition(int[], int, int); 
void QuickSort(int[], int, int); 

int main()
{
	int n, array[100], i;
	printf("要輸入幾個數字: ");
	scanf("%d", &n);
	printf("輸入 %d 個數字:\n", n);
	for (i = 0; i < n; i++)
    	scanf("%d", &array[i]);
    	
    QuickSort(array, 0, n-1); 	
	
	printf("\nQuick sort:\n");
	for (i = 0; i < n ; i++)
		printf("%d ", array[i]);
	printf("\n");
	system("PAUSE");
	return 0;
}

int partition(int array[], int left, int right) { 
    int i = left - 1; 
    int j;
    for(j = left; j < right; j++) { 
        if(array[j] <= array[right]) { 
            i++; 
            swap(array[i], array[j]); 
        } 
    } 
    swap(array[i+1], array[right]); 
    return (i+1); 
} 

void QuickSort(int array[], int left, int right) { 
    if(left < right) { 
        int q = partition(array, left, right); 
        QuickSort(array, left, q-1); 
        QuickSort(array, q+1, right); 
    } 
}
