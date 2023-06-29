/* Ch7 proto1.c */

#include <stdio.h>
#include <stdlib.h>

float get_score(void);
char level(float ,float ,float);

int main()
{
	float s1,s2,s3;
	char grade;

	s1 = get_score();
	s2 = get_score();
	s3 = get_score();
	grade = level(s1,s2,s3);
	printf("\nYour score grade is %c.\n",grade);
	
	system("PAUSE");
    return 0;
}

float get_score(void)
{
	float temp;

	printf("Input your score : ");
	scanf("%f",&temp);
	return(temp);
}

char level (float a1,float a2,float a3)
{
	float avg;
	
	printf("\nScore : %.2f	%.2f	%.2f\n",a1,a2,a3);
	avg = (a1 + a2 + a3) / 3;
	printf("	Average : %f.\n",avg);
	
	if(avg >= 90)
		return ('A');
	if(avg >= 80)
		return ('B');
	if(avg >= 70)
		return ('C');
	if(avg >= 60)
		return ('D');
	return('E');
}
