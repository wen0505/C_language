/* Ch6 continue.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int score;
	int total = 0;
	int item = 0;

	printf("  %d. Input : ",++item);
	while(scanf("%d",&score) == 1) {
		if((score < 0) || (score > 100)){
			printf("Invalid score ! Try again : ");
			continue;
		}
		total += score;
		printf("  %d. Input : ", ++item);
	}
	item--;
	printf("\nThere are %d scores,\n",item);
	printf("  Total : %d, Average : %.2f\n",
			    total,(float) total/(float)item);
    
    system("PAUSE");
	return 0;

}
 
