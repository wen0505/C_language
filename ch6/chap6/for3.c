/* Ch6 for3.c */

#include <stdio.h>
#include <stdlib.h>
#define PASSWD 1462

int main()
{
	int try1 = 1;
	int passwd = 0;

	for (printf("\nEnter your password :\n");
    	(try1<=3) && (passwd!=PASSWD) && printf("	%d. ",try1++);
		 )
		scanf("%d",&passwd);

	if (passwd == PASSWD)
		printf("Congratulations !\n");
	else
		printf("You are rejected !\n");

	system("PAUSE");
	return 0;
}
