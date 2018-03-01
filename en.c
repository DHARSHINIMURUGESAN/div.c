#include<stdio.h>
int main()
{
	int n;
	printf("enter the numbers:");
	scanf("%d",&n);
	if(n%2==0)
	{
		n=n;
	}
	else
	{
		n=n-1;
	}
	printf("%d",n);
	return 0;
}
