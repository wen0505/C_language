/* hw2.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	int c;
	fp = fopen("file.dat","w+");
	fputs("This is study.com", fp);
	fseek( fp, 7, SEEK_SET );
	fputs(" C Programming.\n", fp);
	printf("The current position of the file pointer is: %ld\n", ftell(fp));
	rewind(fp);
	printf("The current position of the file pointer is: %ld\n", ftell(fp));
	while(1) { 
		c = fgetc(fp);
		if( feof(fp) ) { 
			break;
		}
		printf("%c", c);
	}
	fclose(fp);
	
	system("PAUSE");
	return 0;
}
