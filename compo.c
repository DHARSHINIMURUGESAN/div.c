#include<stdio.h>
int main()
{
int num,flag=0,i;
printf("\nEnter a number:");
scanf("%d",&num);
for(i=2;i<(num/2);i++)
{
if(num%i==0)
{
flag=1;
}
}
if(flag==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
return 0;
}
