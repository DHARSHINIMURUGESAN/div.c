#include<stdio.h>
int main()
{
	int a,b,i,n;
	char c;
	printf("Enter the Number of Operations:");
	scanf("%d",&n);
	printf("enter the two values:");
	for(i=0;i<n;i++)
	{
		scanf("%d%c%d",&a,&c,&b);
		if(i%2==0)
		{
			printf("\n%d",(a/b));
		}
		else
		{
			printf("\n%d",(a%b));
		}
	}
	return 0;
}
