#include <stdio.h>

int main()
{
	int t,p,q,r,s;
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%d",&p);
	    scanf("%d",&q);
	    scanf("%d",&r);
	    scanf("%d",&s);
	    
	    if(s>(p+q+r))
	    {
	        printf("YES\n");
	    }
	    else if(p>(q+r+s))
	    {
	        printf("YES\n");
	    }
	    else if(q>(r+p+s))
	    {
	        printf("YES\n");
	    }
	    else if(r>(q+p+s))
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

