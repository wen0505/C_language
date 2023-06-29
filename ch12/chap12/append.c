/* ch12 append.c */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char filename[80];
    char msg[80];
    FILE *fp;
   
    if (argc == 1) {
    	printf("Input file name : ");
    	gets(filename);
    }
    else
    	strcpy(filename,argv[1]);
    	
    if ((fp = fopen(filename,"a+")) == NULL) {
    	printf("\nCan't open file : %s",filename);
    	exit(0);
    }
    
    printf("\n\nAppend data to file %s :\n",filename);
    printf("Press <RETURN> at the beginning to end !\n\n");
    while (gets(msg) && (msg[0] != 0))
    	fprintf(fp,"%s",msg);
    
    rewind(fp);
       
    printf("\nDatas in file %s :\n\n",filename);
    while (fscanf(fp,"%s",msg) == 1)
    	puts(msg);
    	
    if (fclose(fp) != 0) {
    	printf("\nCan't close file %s\n",filename);
    	exit(0);
    }
    
    system("PAUSE");
    return 0;
}
