#include <stdio.h>

int main()
{
	int t,a;
	scanf("%d",&t);
	
	while(t--)
	{
	scanf("%d",&a);
	
	if(a%2==0 && a%7==0)
	{
	    printf("ALICE\n");
	}
	else if(a%2!=0 && a%9==0)
	{
	    printf("BOB\n");
	}
	else
	{
	    printf("CHARLIE\n");
	}
    }
	return 0;
}

