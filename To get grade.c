#include<stdio.h>
int main()
{
	int m;
	printf("Enter mark : ");
	scanf("%d",&m);
	if(m>=90&&m<=100)
	{
		printf("Grade = A1");
	}
	else if(m>=80&&m<=90)
	{
		printf("Grade = A2");
	}
	else if(m>=70&&m<=80)
	{
		printf("Grade = B1");
	}
	else if(m>=60&&m<=70)
	{
		printf("Grade = B2");
	}
	else if(m>=50&&m<=60)
	{
		printf("Grade = C1");
	}
	else if(m>=40&&m<=50)
	{
		printf("Grade = C2");
	}
	else if(m>=30&&m<=40)
	{
		printf("Grade = D1");
	}
	else if(m<=20)
	{
		printf("Failed ");
	}
	return 0;
}
