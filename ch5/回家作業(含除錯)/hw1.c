/* hw1.c */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	double time, length, gsum, nsum;
	printf("��J���q�ܮɶ�(1-24): ");
    scanf("%lf", &time);
    printf("��J���q�ܪ���(����): ");
    scanf("%lf", &length);

    gsum = 0.4 * length;
    if(time < 8 || time > 18) 
		nsum = 0.5 * gsum;
    else 
		nsum = gsum;
		
    if(length >= 60) {
    	nsum = 0.85 * gsum;
    	printf("\n�q�ܶO��: %.2f", nsum);
	}
	
    else 
    	nsum = nsum * 1.04;
		printf("\n�q�ܶO��: %.2f", nsum); 
	printf("\n");
    system("pause");
    return 0;
}
