#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	(num&1)?printf("given num is odd"):printf("given num is even");
	return 0;
}
