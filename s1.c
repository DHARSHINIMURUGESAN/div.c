#include<stdio.h>
int main()
{
	int i,k;
	char s[100];
	printf("Enter the String:");
	scanf("%s",&s);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%s\n",s);
	}
	return 0;
}
