/* hw2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	float x, y, z, average;
	printf("��JC�{��������: ");
	scanf("%f", &x);
	printf("��J�L�n��������: ");
	scanf("%f", &y);
	printf("��J�p��������: ");
	scanf("%f", &z);
	average = x*0.4 + y*0.3 + z*0.3;
	printf("��������: %f", average);
	system("PAUSE"); 
	return 0;
}
