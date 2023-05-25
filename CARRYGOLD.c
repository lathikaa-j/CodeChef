#include <stdio.h>

int main() 
{
	int t,n,x,y,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    scanf("%d",&x);
	    scanf("%d",&y);
	    n=n+1;
	    c=n*y;
	    if(c>=x)
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

