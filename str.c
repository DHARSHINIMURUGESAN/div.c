#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
char *rev;
printf("enter any string:");
scanf("%s", str);
rev = strrev(str);
printf("reverse string is:%s",rev);
return 0;
}
