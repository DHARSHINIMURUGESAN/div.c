#include<stdio.h>
int main()
{
char str[20],str1[20],str2[20],j=0,k=0;
int i=0;
printf("\nEnter a string:");
scanf("%s",&str);
while(str[i]!='\0')
{
if(i%2==0)
{
str1[j]=str[i];
j++;
}
else
{
str2[k]=str[i];
k++;
}
i++;
}
printf("\nOdd position string:%s",str1);
printf("\nEven Positon string:%s",str2);
return 0;
}
