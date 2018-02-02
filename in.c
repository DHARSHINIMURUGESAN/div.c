#include <stdio.h>

int main(void)
{
	int a[100],n,i;
	printf("\Enter the number of values");
	scanf("%d",&n);
	printf("\nEnter the array values");
  scanf("%d",&a[100]);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			printf("\n%d",i);
		}
	}
	
	return 0;
}
