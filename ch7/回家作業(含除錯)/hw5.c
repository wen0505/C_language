/* hw5 */
#include <stdio.h>
#include <stdlib.h>
int funct(int, int);
int main(void){
   int x, y, ans = 0;
   printf("�п�Jx�My����: ");
   scanf("%d %d", &x, &y);
   ans = funct(x, y);
   printf("F�禡���� %d\n", ans);
   system("PAUSE"); 
   return 0;    
}
 
int funct(int x, int y) {
   if (x < 0 || y < 0) {
     return x - y;      
   } 
   else {
     return funct(x-1, y) + funct(x, y-1);     
   }    
}
