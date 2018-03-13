#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int c;
printf("enter the string");
scanf("%s",&a);
strcpy(b,a);
strrev(a);
c=strcmp(a,b);
if(b==0)
{
printf("palindrome");
}
else
{
    printf("not palindrome");
}
return 0;
}
