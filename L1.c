#include<stdio.h>
void main()
{
int a[20],n,i,j,temp;
printf("\nEnter the numbers");
scanf("%d",&n);
printf("\nArray values");
for(i=0;i<n;i++)
{
	scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
    for(i=0;i<n;i++)
    {
	printf("%d",a[i]);
    }
}
