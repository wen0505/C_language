/* opeDebug2 */
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int num = 100;
	num += 100;
	printf("num�[�W100�ë��w��num�ᬰ %d\n", num);
	num -= 100;
	printf("num�100�ë��w��num�ᬰ %d\n", num);
	num *= 100;
	printf("num���W100�ë��w��num�ᬰ %d\n", num);
	num /= 100;
	printf("num���H100�ë��w��num�ᬰ %d\n", num);
	system("PAUSE"); 
	return 0;
}
