/* ex2.c */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct st_name {
    	char *firstname;
    	char *lastname;
	};
	struct student {
    	struct st_name name;
    	int score;
	};
	struct student s1 = {"Peter", "Wang", 95};
 	printf("%s %s score is %d\n", s1.name.firstname, 
	 s1.name.lastname, s1.score);
    system("PAUSE");
    return 0;   	
}
