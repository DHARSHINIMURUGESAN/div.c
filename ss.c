#include<stdio.h>
int main()
{
int a,b,temp=0;
printf("\n Enter two values:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap of a,b %d %d",a,b);
return 0;
}
