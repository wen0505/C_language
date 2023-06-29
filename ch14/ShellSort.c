/* Shell sort.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, array[100], gap, s, r, temp;
	printf("�n��J�X�ӼƦr: ");
	scanf("%d", &n);
	printf("��J %d �ӼƦr:\n", n);
	for (s = 0; s < n; s++)
    	scanf("%d", &array[s]);
	for (gap = n >> 1; gap > 0; gap >>= 1){
		for (s = gap; s < n; s++) {
			temp = array[s];
			for (r = s - gap; r >= 0 && array[r] > temp; r -= gap)
				array[r + gap] = array[r];
			array[r + gap] = temp;
		}
	}
	printf("\nShell sort:\n");
	for (s = 0; s <= n - 1; s++)
		printf("%d ", array[s]);
	printf("\n");
	system("PAUSE");
	return 0;
}
