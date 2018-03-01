#include<stdio.h>
int main()
{
int m,n,mul=0;
printf("\n enter two numbers");
scanf("%d%d",&m,&n);
mul=m*n;
if(mul%2==0)
{
printf("Even");
}
else
{
    printf("Odd");
}
return 0;
}
