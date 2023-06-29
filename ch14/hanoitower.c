/* HanoiTower.c */
#include <stdio.h>
#include <stdlib.h>

int count = 0;
void HanoiTower(int , char, char, char); 

int main(void)
{     
    int n;  
    printf("請輸入河內塔的高度: ");
    scanf("%d", &n);
    
    HanoiTower(n, 'A', 'B', 'C');
    printf("移動 %d 層河內塔共需移動 %d 次\n", n, count);
    
    system("PAUSE");
    return 0;
}
 
void HanoiTower(int n, char A, char B, char C) {
  if (n == 1) {
    printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++count, n, A, C);
  } 
  else {
    HanoiTower(n - 1, A, C, B);
    printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++count, n, A, C);
    HanoiTower(n - 1, B, A, C);       
  }
}
