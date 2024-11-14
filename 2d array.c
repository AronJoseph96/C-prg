#include<stdio.h>
int main()
{
	int i,j,a[20][20],r,c;
	printf("Enter no of rows and columns:");
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter element for position a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
	printf("\n\n");
	}
	return 0;
}
