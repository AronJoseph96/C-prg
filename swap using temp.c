#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping:- a=%d and b=%d",a,b);
}
