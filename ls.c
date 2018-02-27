#include<stdio.h>
int main()
{
int n,i,min,max;
int a[10];
printf("enter the no.of elements:");
scanf("%d",&n);
printf("enter the array values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=max=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("%d\t",min);
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
return 0;
}
