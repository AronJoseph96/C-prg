#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter value for x: ");
	scanf("%d",&x);
	printf("Enter value for y: ");
	scanf("%d",&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("Value after swapping:\n x=%d\ty=%d",x,y);
	return 0;
}
