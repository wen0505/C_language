/* hw3 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	float a, b, c, d, e, average;
	printf("���ɧ@�~: ");
	scanf("%f", &a);
	printf("������: ");
	scanf("%f", &b);
	printf("������: ");
	scanf("%f", &c);
	printf("���ɦ�: ");
	scanf("%f", &d);
	printf("�W������: ");
	scanf("%f", &e);
	average = a*0.2 + b*0.2 + c*0.25 + d*0.15 + e*0.2;
	printf("C�y��������: %f", average);
	system("PAUSE"); 
	return 0;
}
