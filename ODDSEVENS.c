#include <stdio.h>

int main() 
{
	int t,a,b,sum;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d",&a,&b);
	   sum=a+b;
	   if(sum%2==0)
	   {
	       printf("Bob\n");
	   }
	   else
	   {
	       printf("Alice\n");
	   }
	}
	return 0;
}

