/* Insertion sort.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, array[100], c, d, t, flag = 0;
	printf("要輸入幾個數字: ");
	scanf("%d", &n);
	printf("輸入 %d 個數字:\n", n);
	for (c = 0; c < n; c++)
    	scanf("%d", &array[c]);
	for (c = 1 ; c <= n - 1; c++) {
		t = array[c];
		for (d = c - 1 ; d >= 0; d--) {
			if (array[d] > t) {
				array[d+1] = array[d];
				flag = 1;
			}
			else
        		break;
    	}
    	if (flag)
    		array[d+1] = t;
	}
	printf("\nInsertion sort:\n");
	for (c = 0; c <= n - 1; c++)
		printf("%d\n", array[c]);
	printf("\n");
	system("PAUSE");
	return 0;
}
