/* ch9 swap3.c */

#include <stdio.h>
#include <stdlib.h>

void swap(int *,int *);

int main()
{
    int x,y;
   
   	x = 14;
   	y = 62;
   	
   	printf("Initial ...\n");
   	printf("  x = %d	y = %d\n",x,y);
   	
   	swap(&x,&y);
   	
   	printf("\nAfter swapping ...\n");
   	printf("  x = %d	y = %d\n",x,y);
   	
   	system("PAUSE");
    return 0;
}
   
void swap(int *a,int *b)
{
    int temp;
   
   	printf("\nIn swap() ...\n");
   	printf("  *a = %d	*b = %d\n",*a,*b);
   	temp = *a;
   	*a = *b;
   	*b = temp;
   	printf("End swap() ...\n");
   	printf("  *a = %d	*b = %d\n",*a,*b);
}   
