/* HanoiTower.c */
#include <stdio.h>
#include <stdlib.h>

int count = 0;
void HanoiTower(int , char, char, char); 

int main(void)
{     
    int n;  
    printf("�п�J�e���𪺰���: ");
    scanf("%d", &n);
    
    HanoiTower(n, 'A', 'B', 'C');
    printf("���� %d �h�e����@�ݲ��� %d ��\n", n, count);
    
    system("PAUSE");
    return 0;
}
 
void HanoiTower(int n, char A, char B, char C) {
  if (n == 1) {
    printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++count, n, A, C);
  } 
  else {
    HanoiTower(n - 1, A, C, B);
    printf("%d: �N�� %d �Ӷ�L�� %c ���� %c\n", ++count, n, A, C);
    HanoiTower(n - 1, B, A, C);       
  }
}
