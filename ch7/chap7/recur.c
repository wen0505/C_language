/* Ch7 recur.c */
 
#include<stdio.h>
#include <stdlib.h>

void recur(int);

int main()
{
	printf("Recursive call...\n\n");
	recur(4);
	
	system("PAUSE");
	return 0;
}

void recur(int level)
{
	printf("   BEFORE level ===> %d\n",level);
	if(level > 0)
		recur (level-1);
	printf("    AFTER level ===> %d\n",level);
}
