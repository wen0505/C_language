/* test */
#include<stdio.h>
#include<stdlib.h>
#define m 3
void add(int *, int *c);
int main()
{
	int x,y;
	int a[m][m];
//	int c[m][m], b[m][m]={{1,1,1},{1,1,1},{1,1,1}};
	printf("��J3*3�x�}:\n");   
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

    printf("�e��add()�禡:\n");
    
    add(*a, *c);

//	for(x=0; x<=2; x++){
//		for(y=0; y<=2; y++){
//			c[x][y]=0; 
//			for(z=0; z<=2; z++){
//				c[x][y]=a[x][y]+ b[x][y];
//			}	
//			printf("%d ",c[x][y]); 
//		}
//      printf("\n");
//	}
	
	printf("%d\n", c[x]);
	
	system("PAUSE");
	return 0;
}

void add(int *a, int *c){
	int x, y, z;
//	int b[m][m]={{1,1,1},{1,1,1},{1,1,1}};
	a[x+3y] + 1 = a[x+3y];
	
	for(x=0; x<=2; x++){
		for(y=0; y<=2; y++){
			c=0; 
			for(z=0; z<=2; z++){
				a[x+3y] + 1 = c[x+3y];
			}	
//			printf("%d ",c[x+3y]); 
		}
	}
	
//	a[y] + 1 = a[y];
	
}
