#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf("The given no is divisible by 5");
	}
	else
	{
		printf("The given no is not divisible by 5");
	}
	return 0;
}
