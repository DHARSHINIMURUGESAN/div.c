#include<stdio.h>
int main()
{
int x,y,d;
printf("enter the number of ninjas in kabali's team:");
scanf("%d",&x);
printf("enter number of ninjas in opponent team:");
scanf("%d",&y);
d=y-x;
printf("difference is %d\n",d);
if(x>y)
{
printf("kabali went to fight");
}
else
{
printf("kabali did not went to fight");
}
return 0;
}
