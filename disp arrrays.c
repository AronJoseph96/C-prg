#include<stdio.h>
int main()
{
	int n,i,a[50];
	printf("Enter array limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number-> ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
