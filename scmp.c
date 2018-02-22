#include<stdio.h>
int main()
{
    char a[10],b[15];
    int i,j,count=0;
    printf("\n enter the first string");
    scanf(" %s1",&a);
    printf("\n enter the second string");
    scanf(" %s",&b);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    i=count;
 for(j=0;b[j]!='\0';++j,++i)
    {
        a[i]=b[j];
    }
    
printf("\n the string is %s",a);
return 0;
    }
