#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d is minimum",a);
	}
	else
	{
		printf("%d is minimum",b);
	}
	return 0;
}
