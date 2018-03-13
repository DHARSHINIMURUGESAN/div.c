#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the two numbers:");
  scanf("%d%d",&a,&b);
  if((a-b)%2==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
  return 0;
}
