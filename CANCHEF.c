#include <stdio.h>

int main() 
{
	int t,x,y,a;
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%d",&x);
	    scanf("%d",&y);
	    a=15*x;
	    
	    if(a>=2*y)
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

