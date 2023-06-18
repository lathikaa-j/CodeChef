#include <stdio.h>

int main() 
{
	int t,x,h;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    scanf("%d",&h);
	    if(x>=h)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

