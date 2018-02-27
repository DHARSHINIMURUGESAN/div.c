#include<stdio.h>
int main()
{
    int digit,n,rev=0;
    printf("enter the number");
    scanf("%d",&digit);
while(digit!=0)
{
int n=digit%10;
digit=digit/10;
rev=rev*10+n;
}
while(rev!=0)
{
    int n=rev%10;
    printf("%d\t",n);
    rev=rev/10;
}
    return 0;
}
