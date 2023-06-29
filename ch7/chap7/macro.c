/* Ch7 macro.c */

#include <stdio.h>
#include <stdlib.h>

#define MSG "macro message !\n"
#define PI 3.14
#define RADIUS 10
#define AREA PI*RADIUS*RADIUS

int main()
{
   	printf("MACRO MSG : %s",MSG);
   	printf("Area of circle with radius 10 is %.2f\n",AREA);
   	
  	system("PAUSE");
    return 0;
}
