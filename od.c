#include <stdio.h>
int main()
{
	int n,t,r=0,i;
	printf("enter the number:");
    scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		r=(r*10)+t;
		n=n/10;
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
