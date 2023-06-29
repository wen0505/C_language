/* ch9 ary_ptr3.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ary[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};
    int i,j;
   
   	printf(" ary = %p\n",ary);
   	printf(" ary+1 = %p\n",ary+1);
   	printf(" ary+2 = %p\n",ary+2);
   	
   	printf("\n");
   	printf(" ary[0] = %p\n", ary[0]);   	
   	printf(" ary[0]+1 = %p\n",ary[0]+1);
   	printf(" ary[0]+2 = %p\n",ary[0]+2);
   	
   	printf("\n");
   	for (i=0; i<3; i++)
   	   for (j=0; j<4; j++)
   	      printf(" ary[%d][%d] = %d\n",i, j, *(*(ary+i)+j));	      	     
    
    system("PAUSE");
    return 0;
}
