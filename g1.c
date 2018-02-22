#include <stdio.h>

int main()
{
   int n1,n2,a,i=1;
   printf("enter the numbers: ");
   scanf("%d%d",&n1,&n2);
   for(i=2;(i<=n1)||(i<=n2);i++)
   {
   if((n1%i==0)&&(n2%i==0))
   {
       a=i;
   }
   }
   printf("greatest number which divides both: %d",a);

    return 0;
}
