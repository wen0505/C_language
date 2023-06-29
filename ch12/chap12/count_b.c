/* ch12 count_b.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char filename[80];
    char ch;
    FILE *fp;
    int count = 0;
   
    if (argc == 1) {
    	printf("Input file name : ");
    	gets(filename);
    }
    else
    	strcpy(filename,argv[1]);
    	
    if ((fp = fopen(filename,"rb")) == NULL) {
    	printf("\nCan't open file : %s",filename);
    	exit(0);
    }
    
    rewind(fp);
       
    while (fscanf(fp,"%c",&ch) == 1)
    	count++;
    printf("\nThere are %d characters in file <%s>.\n",
    	   count,filename);	
    
    if (fclose(fp) != 0) {
    	printf("\nCan't close file %s\n",filename);
    	exit(0);
    }

    system("PAUSE");
    return 0;
}
