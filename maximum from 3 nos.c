#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{ 
	m=a;
	}
	else
	{m=b;
	}
	if(m<c)
	{m=c;
	}
	printf("Maximum is %d",m);
	return 0;
}
