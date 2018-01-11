#include<stdio.h>
#include<math.h>
int main()
{
int low,high,i,temp1,temp2,rem,n=0,result=0;
printf("enter two numbers");
scanf("%d%d",&low,&high);
printf("armstrong number between %d and %d are:",low ,high);
for(i=low+1;i<high;++i)
{
temp1=i;
temp2=i;
whie(temp1!=0)
{
temp1/=10;
++n;
}
while(temp2!=0)
{
rem = temp2 % 10;
result += pow(rem,n);
temp2/=10;
}
if(result==i)
{
printf("%d",i);
}
n=0;
result=0;
}
return 0;
}
