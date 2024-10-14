#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("\n %d",i);
		}
		i++;
	}
}
