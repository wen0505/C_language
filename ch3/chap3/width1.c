/* ch3 width1.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double fl = 123.4567;
		
	printf("|%f|\n",fl);
	printf("|%20f|\n",fl);
	printf("|%-20f|\n",fl);
	printf("|%-20.8f|\n",fl);
	printf("|%-6.2f|\n",fl);
	printf("|%+-20e|\n",fl);
	printf("|%+-20.3e|\n",fl);
	
	system("PAUSE");
	return 0;
}
