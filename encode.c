#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,length;
    printf("\nEnter the string:");
    scanf("%s",str);
    length=strlen(str);
    printf("\n The encoded form is:");
    for(i=0;i<length;i++)
    {
        printf("%c",str[i]+3);
    }
    return 0;
    
}
