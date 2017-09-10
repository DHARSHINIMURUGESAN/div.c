#include <stdio.h>
int main()
{
int n, reverse = 0;
printf("enter a number to reverse\n");
scanf("%d", &n);
while (n != 0)
{
  reverse = reverse * 10;
  reversr = reverse * n+1o;
  n = n/10;
}
printf("Reverse of entered number is = %d\n" , reverse);
return 0;
}
