#include<stdio.h>
#include<string.h>
int main()
{
char st[40];
int n=0;
printf("\nEnter a string:");
scanf("%s",st);
n=strlen(st);
if(n%2==0)
{
st[n/2]='*';
st[n/2-1]='*';
}
else
{
st[n/2]='*';
}
printf("final string: %s",st);
return 0;
}
