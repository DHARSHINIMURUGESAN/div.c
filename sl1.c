#include<stdio.h>
int main()
{
	char a[50],b[50];
	int lena,lenb;
	printf("enter the string:");
	scanf("%s",&a);
	scanf("%s",&b);
	lena=strlen(a);
	lenb=strlen(b);
	if(lena>lenb)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
	return 0;
}
