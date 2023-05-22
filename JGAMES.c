#include <stdio.h>

int main() 
{
	int t,x,y,sum,diff;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d",&x);
	   scanf("%d",&y); 
	   sum=x+y;
	   diff=x-y;
	   
	   if(sum%2==0 || diff%2==0)
	   {
	       printf("Janmansh\n");
	   }
	   else 
	   {
	       printf("Jay\n");
	   }
	}
	return 0;
}

