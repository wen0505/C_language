/* ch10 str_len.c */

#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(const char *str)
{
    size_t count;
   
   	for (count = 0; *str != '\0'; str++,count++)
   	   ;
   	return(count);
}

/*********************************************************/

int main()
{
    char msg1[10] = {'s','t','r','i','n','g','\0'};
    char msg2[]   = "Null array size";
    char *msg3    = "Pointer view";
    char msg4[80];
   
   	printf("\n Length of String <%s> is %u",
   		msg1,my_strlen(msg1));
   	printf("\n Length of String <%s> is %u",
   		msg2,my_strlen(msg2));
   	printf("\n Length of String <%s> is %u",
   		msg3,my_strlen(msg3));   		   	
   	
   	printf("\n\n Enter a string : ");
   	gets(msg4);
   	printf("\n Length of String <%s> is %u \n",
   		msg4,my_strlen(msg4));
    
    system("PAUSE");
    return 0;
}
