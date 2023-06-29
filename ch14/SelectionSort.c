/* Selection sort.c */
#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	int array[100], n, e, f, position, t;
	printf("要輸入幾個數字: ");
	scanf("%d", &n);
	printf("輸入 %d 個數字:\n", n);
	for (e = 0; e < n; e++)
		scanf("%d", &array[e]);
	for (e = 0; e < (n - 1); e++){ // finding minimum element (n-1) times
		position = e;
    	for (f = e + 1; f < n; f++){
			if (array[position] > array[f])
        	position = f;
    	}
    	if (position != e){
			t = array[e];
			array[e] = array[position];
			array[position] = t;
    	}
  	}
	printf("\nSelection sort:\n");
	for (e = 0; e < n; e++)
		printf("%d ", array[e]);
	printf("\n");
	system("PAUSE"); 
	return 0;
}
