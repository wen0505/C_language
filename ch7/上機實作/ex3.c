/* ex3 */
#include <stdio.h> 
#include <stdlib.h> 
long fibonacci(long);
int main() 
{ 
	long n, ans;
	printf("Enter a number(n >= 0):");
	scanf("%ld", &n);
	if (n < 0)
		printf("Number must be > 0\n");
	else {
		ans = fibonacci(n);
		printf("fibonacci(%ld) = %ld\n", n, ans);
	}
	system("PAUSE"); 
	return 0;
}

long fibonacci(long n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return(fibonacci(n - 1) + fibonacci(n - 2));		
}
