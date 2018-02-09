#include<stdio.h>
int main()
{
	int a[100],s[100],n,i,j,count;
	printf("\nEnter the number of values");
	scanf("%d",&n);
	printf("\nEnter the values of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s[i]=-1;
    }
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				s[j]=0;
				
			}
		}
		
        if(s[i] != 0)
        {
            s[i] = count;
        }
	}
	printf("\nThe elements are : ");
	for(i=0;i<n;i++)
	{
		
		if(s[i]==1)
		{
			printf("\n%d",a[i]);
		}
	}
	return 0;
}
