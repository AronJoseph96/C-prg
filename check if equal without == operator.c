#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x and y: ");
	scanf("%d%d",&x,&y);
	if(x-y!=0){
		printf("0");        // output 0 = numbers are unequal
	}
	else{
		printf("1");        // output 1 = numbers are equal
	}
	return 0;
}
