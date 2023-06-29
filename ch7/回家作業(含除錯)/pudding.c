/* pudding */
#include <stdio.h> 
#include <conio.h> 
void HanoiTower(int , char, char, char); 
int main(void)
{     
    int disk;  
	char A = 'A' , B = 'B' , C = 'C'; 
	
	while (disk != -1){
		printf("請輸入 disk 數目: ");
    	scanf("%d", &disk);
    	HanoiTower(disk, A, B, C);
    	printf("\n\n");
	}
    
    system("PAUSE");
    return 0;
}
 
void HanoiTower(int disk, char a, char b, char c) {
  if (disk == 0) {
  	printf("please enter new disk.");
  }
  
  else if (disk == 1) {
    printf("Move disk %d from %c to %c\n", disk, a, c);
  } 
  
  else {
    HanoiTower(disk - 1, a, c, b);
    printf("Move disk %d from %c to %c\n", disk, a, c);
    HanoiTower(disk - 1, b, a, c);       
  }
 
}
