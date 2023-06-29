/* ex1.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct student {
    	char *name;
    	int score;
	};
	struct student s = {"Peter", 96};
	struct student *pstr = &s;
   	printf("s.name = %s\n", s.name);
   	printf("s.score = %d\n", s.score);
	printf("pstr->name = %s\n", pstr->name);
	printf("pstr->score = %d\n", pstr->score);
	printf("(*pstr).name = %s\n", (*pstr).name);
	printf("(*pstr).score = %d\n", (*pstr).score);
    system("PAUSE");
    return 0;   	
}
