#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("\n The sum of %d and %d = %d",a,b,a+b);
	printf("\n The difference of %d and %d = %d",a,b,a-b);
	printf("\n The product of %d and %d = %d",a,b,a*b);
	printf("\n The quotient of %d and %d = %d",a,b,a/b);
	return 0;
}
