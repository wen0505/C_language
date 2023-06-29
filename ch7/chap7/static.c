/* Ch7 static.c */

#include <stdio.h>
#include <stdlib.h>

void test(void);

int main()
{
    int i;
   
    printf("static variable testing ...\n\n");
    for (i=0; i<5; i++) {
     	printf("    Iteration %d : ",i+1);
    	test();
    }
    system("PAUSE");
	return 0;
}
   
void test(void)
{
    int auto_var = 1;
    static static_var = 1;
   
    printf(" auto_var = %d  static_var = %d\n",
      	     auto_var++,static_var++);
}
      
