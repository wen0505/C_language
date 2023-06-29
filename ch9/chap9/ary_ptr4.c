/* ch9 ary_ptr4.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ary[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}};

	int *ptr[3] = {ary[0], ary[1], ary[2]};
    int i;
      	
   	printf("\n");
   	for (i=0; i<3; i++)
   	   printf("*ary[%d]=%d, **(ary+%d)=%d\n", i, *ary[i], i, **(ary+i));	      	     
    
    system("PAUSE");
    return 0;
}
