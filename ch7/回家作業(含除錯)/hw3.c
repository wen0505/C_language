/* hw3 */
#include <stdio.h>
#include <stdlib.h>
int multiple(int, int);
int main(void){
   int x, n, ans = 0;
   printf("�п�Jx�Mn����: \n");
   scanf("%d %d", &x, &n);
   ans = multiple(x, n); 
   printf("%d �� %d �ۭ����� %d\n", n, x, ans);
   system("PAUSE"); 
   return 0;    
}
 
int multiple(int x, int n) {
   if (n == 0) {
     return 1;      
   } 
   else {
     return x * multiple(x, n-1);     
   }    
}
