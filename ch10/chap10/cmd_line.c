/* ch10 cmd_line.c */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i;
   
    for (i=0; i<argc; i++)
        printf("  Arg[%d] : %s\n",i,argv[i]);

    system("PAUSE");
    return 0;
}
