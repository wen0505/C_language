/* BMI.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float h, w, bmi;

	printf("please input your height (cm): ");
	scanf("%f", &h);
	printf("please input your weight (kg): ");
	scanf("%f", &w);
	
	bmi = w/((h / 100) * (h / 100));

	printf("\nYour BMI is %f\n", bmi);
	
	if(bmi < 18.5){
		printf("\n你太輕了\n");
	}
	
	if(bmi >= 18.5 && bmi < 25){
		printf("\n你正常胖\n");
	}
	
	if(bmi >= 25 && bmi < 30){
		printf("\n你肉肉的\n");
	}
	
	if(bmi >= 30){
		printf("\n你肥死了\n");
	}

	system("PAUSE");
    return 0;
}
