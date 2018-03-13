#include<stdio.h>
void main()
{
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=n;'\n';i++)
{
 if(i%10==0)
 {
 printf("%d",i);
 break;
 }
}
}
