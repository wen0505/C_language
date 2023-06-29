/* ch11 point.c */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
   	int x;
   	int y;
};
   
void get_point(struct point *);
double length(struct point,struct point);
struct point get_mid(struct point,struct point);

int main()
{
    struct point p1,p2;
    double len;
    struct point midp;
  
  	printf("Input first point : \n");
  	get_point(&p1);
  	
  	printf("\nInput second point : \n");
  	get_point(&p2);
  	
  	len = length(p1,p2);
  	midp = get_mid(p1,p2);
  	
  	printf("\n\nPOINT #1 (%d,%d)", p1.x,p1.y);
  	printf("\nPOINT #2 (%d,%d)", p2.x,p2.y);
  	
  	printf("\n  Length = %f\n",len);
  	printf("  Midpoint : (%d,%d) \n",midp);
  	
  	system("PAUSE");
    return 0;
}
  
  
void get_point(struct point *point)
{
   	printf("    X-axis : ");
   	scanf("%d",&(point->x));  
   	printf("    Y-axis : ");
   	scanf("%d",&(point->y));
}
   
   
double length(struct point p1,struct point p2)
{
    double leng;
    int x_dif,y_dif;
   
   	x_dif = abs(p1.x - p2.x);   
   	y_dif = abs(p1.y - p2.y);
   	
   	leng = sqrt((double) (x_dif*x_dif + y_dif*y_dif));
   	return(leng);
}
   
   
struct point get_mid(struct point p1,struct point p2)
{
    struct point mid;
   
   	mid.x = (p1.x + p2.x) / 2;   
   	mid.y = (p1.y + p2.y) / 2;
   	
   	return(mid);
}
