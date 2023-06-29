/* ch10 cmd_op.c */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void op(int,int,char);

int main(int argc,char *argv[])
{
    char operator;
    int op1,op2;
   
    op1 = atoi(argv[1]);
    op2 = atoi(argv[3]);
      
    if (!stricmp(argv[2],"add"))
        operator = '+';
    else if (!stricmp(argv[2],"minus"))
        operator = '-';
    else if (!stricmp(argv[2],"mul"))
        operator = '*';
    else if (!stricmp(argv[2],"div"))
        operator = '/';
      
    op(op1,op2,operator);

    system("PAUSE");
    return 0;
}
   
   
void op(int op1, int op2,char operator)
{
    switch (operator) {
        case '+':
      	    printf("    %d + %d = %d\n",op1,op2,op1+op2);
      	    break;
      	case '-':
      	    printf("    %d - %d = %d\n",op1,op2,op1-op2);
      	    break;      	
      	case '*':
      	    printf("    %d * %d = %d\n",op1,op2,op1*op2);
      	    break;      	         	
      	case '/':
      	    printf("    %d / %d = %d\n",op1,op2,op1/op2);
    }
}   
