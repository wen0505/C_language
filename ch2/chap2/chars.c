/* ch2 chars.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char new_line = '\xA';		/* hexdecimal */
	char beep = '\007';			/* octal */
	char tab = 9;				/* decimal */
	char back_slash = '\\';
	char single_quote = '\'';

	printf("Characters display testing...\n\n");
	printf("   Old Line%c   New Line.\n",new_line);
	printf("   Beeping...%c\n",beep);
	printf("   BackSlash : %c.\n",back_slash);
	printf("   Don%ct be confused..\n",single_quote);
	printf("   Tab Test...%c%cContinued...\n",tab,tab);
	
	system("PAUSE");
	return 0;
}
