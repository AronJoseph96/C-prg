#include<stdio.h>
int main()
{
	int a;
	printf("Enter the year: ");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0)
	{
		printf("Its is a Leap year");
	}
	else if(a%400==0)
	{
		printf("Its is a Leap Year");
	}
	else
	{
		printf("Its not a Leap year");
	}
	return 0;
}
