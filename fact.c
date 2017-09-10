#include <stdio.h>
int main()
{
int n, i;
unsigned long long factorial = 1;
printf("enter an integers: ");
scanf("%d",&n);
if (n < 0)
   printf("error! factorial of a negative number does not exist.");
else
{
   for(i=1; i<=n; ++i)
   {
     factorial *= i;
   }
   printf("Factorial of %d",n,factorial);
}   
