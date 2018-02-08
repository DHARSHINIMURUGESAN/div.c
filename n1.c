#include <stdio.h>

int main()
{
  int n,r,sum=0;
  printf("\n Enter the number:");
  scanf("%d",&n);
  while(n>0)
  {
      r=n%10;
      sum=sum+r*r;
      n=n/10;
      
  }
  printf("\nThe sum is:%d",sum);

    return 0;
}
