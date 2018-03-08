
#include<stdio.h>
#include<string.h>
int main()
{
int l,i,count=0;
char a[30];
printf("\nEnter a string\n");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if((a[i]=='0')||(a[i]=='1'))
{
count++;
}
}
if(count==l)
{
printf("Yes");
}
else
{
printf("No");
}
return 0;
}
