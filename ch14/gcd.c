/* gcd.c */
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b); 

main()
{     
    int a, b;
    printf("½Ð¿é¤Ja©Mb:\n");
    scanf("%d %d", &a, &b);
    printf("gcd(%d,%d) = %d\n", a, b, gcd(a, b));
    
    system("PAUSE");
}
 
int gcd(int a, int b){
	if (a % b == 0)
		return b;
	else
		return gcd(b, a%b);
}
