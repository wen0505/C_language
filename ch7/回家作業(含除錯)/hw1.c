/* hw1 */
#include <stdio.h> 
#include <stdlib.h> 
void one(int);
int main() 
{ 
	int a;
	printf ("輸入一個整數：");
	scanf ("%d", &a);
	getchar ();
	one(a);
	printf ("\n");
	system("PAUSE"); 
	return 0;
}

void one (int b)
{
	int c,d=0;
	printf ("因數為：");
	for (c=1 ; c<=b ; c++){
		if (b % c ==0){
			printf ("%3d",c);
			d++;
		}
	}
	if (d == 2)
		printf ("\n%d為質數",b);
	else
		printf ("\n%d非質數",b);
}
