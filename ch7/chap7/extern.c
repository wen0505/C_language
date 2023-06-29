/* Ch7 extern.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void auto_fun(void);
void extern_fun(void);
void void_fun(void);
void default_fun(void);

int ary[SIZE] = {1,2,3,4,5};

int main()
{
   printf("extern variable testing ...\n\n");
      
   auto_fun();
   extern_fun();
   void_fun();
   default_fun();
   
   system("PAUSE");
   return 0;
}
   
void auto_fun(void)
{
   auto int ary[SIZE];
   int i;
   
   printf("  In auto_fun() :\n\n");
   for (i=0;i<SIZE;i++)
      printf("  ary[%d] : %d\n",i,ary[i]);
   printf("\n\n");
}   
   
void extern_fun(void)
{
   extern int ary[SIZE];
   int i;
   
   printf("  In extern_fun() :\n\n");
   for (i=0;i<SIZE;i++)
      printf("  ary[%d] : %d\n",i,ary[i]);
   printf("\n\n");
}      
   
void void_fun(void)
{
   int i;
   
   printf("  In void_fun() :\n\n");
   for (i=0;i<SIZE;i++)
      printf("  ary[%d] : %d\n",i,ary[i]);
   printf("\n\n");
}      
   
void default_fun(void)
{
   int ary[SIZE];
   int i;
   
   printf("  In default_fun() :\n\n");
   for (i=0;i<SIZE;i++)
      printf("  ary[%d] : %d\n",i,ary[i]);
   printf("\n\n");
}      
