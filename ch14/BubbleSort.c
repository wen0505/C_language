/* Bubble sort.c */
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int array[100], n, a, b, swap;
	printf("�n��J�X�ӼƦr: ");
	scanf("%d", &n);
	printf("��J %d �ӼƦr:\n", n);
	for (a = 0; a < n; a++)
		scanf("%d", &array[a]);
	for (a = 0 ; a < n - 1; a++){
    	for (b = 0 ; b < n - a - 1; b++){
      		if (array[b] > array[b+1]){ /* For deareasing order use < */
        		swap       = array[b];
        		array[b]   = array[b+1];
        		array[b+1] = swap;
      		}
    	}
  	}
	printf("\nBubble sort:\n");
	for (a = 0; a < n; a++)
		printf("%d ", array[a]);
	printf("\n");
	system("PAUSE"); 
	return 0;
}
