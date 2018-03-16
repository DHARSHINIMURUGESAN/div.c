#include <stdio.h>
int main()
{
	int a,t,r=0,i;
	printf("enter the number:");
    scanf("%d",&a);
	while(a!=0)
	{
		t=a%10;
		r=(r*10)+t;
		a=a/10;
	}
	while(r!=0)
	{
		i=r%10;
		r=r/10;
		if(i%2!=0)
		{
		  printf("%d\n",i);
		}
			
	}
  return 0;
}
