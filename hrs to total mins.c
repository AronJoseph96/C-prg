#include<stdio.h>
int main()
{
	int h,m,c;
	printf("Enter hours: ");
	scanf("%d",&h);
	printf("Enter minutes: ");
	scanf("%d",&m);
	printf("hour %d and minute %d is converted to %d",h,m,h*60+m);
	return 0;
}
