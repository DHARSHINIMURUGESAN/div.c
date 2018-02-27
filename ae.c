#include<stdio.h>
int main()
{
int a,n,i;
int b[10];
printf("enter the no.of elements:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
a=n/2;
printf("%d",b[a]);
return 0;
}

