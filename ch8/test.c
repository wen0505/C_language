/* test */
#include<stdio.h>
#include<stdlib.h>
#define m 3
//void printarray(const int [3][3]);
int main()
{
	int x,y,z;
	int a[m][m],c[m][m],b[m][m]={{1,1,1},{1,1,1},{1,1,1}};
	printf("��J3*3�x�}�e��add()�禡\n");   
	for(x=0; x<3; x++){
		for(y=0; y<3; y++){                     
			scanf("%d",&a[x][y]);
		}
	}

	printf("��J���}�C:\n");

	for(x=0; x<=2; x++){
		for(y=0; y<=2; y++){
			printf("%d ",a[x][y]);
		}
		printf("\n");
	}

	printf("add()�禡\n");

	for(x=0; x<=2; x++){
		for(y=0; y<=2; y++){
			printf("%d ",b[x][y]);
		}
		printf("\n");
	}

    printf("a�Mb�x�}�ۥ[���G\n");

	for(x=0; x<=2; x++){
		for(y=0; y<=2; y++){
			c[x][y]=0; 
			for(z=0; z<=2; z++){
				c[x][y]=a[x][y]+ b[x][y];
			}	
			printf("%d ",c[x][y]); 
		}
      printf("\n");
    }   
	system("PAUSE");
	return 0;
}
