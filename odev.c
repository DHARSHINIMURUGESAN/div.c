#include<stdio.h>
int main()
{
  int m,n,num;
  printf("enter two numbers:");
  scanf("%d%d",&m,&n);
  num=n+m;
  if(num%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
