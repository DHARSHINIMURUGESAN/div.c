#include<stdio.h>
int main()
{
int a[20],n,k,i,flag=0;
char s[20];
printf("enter the character:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
    flag=1;
}
if(flag==1)
{
printf("\n no");
}
else
{
printf("\n yes");
}
return 0;
}
