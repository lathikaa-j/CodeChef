#include <stdio.h>

int main() 
{
	int t,a,b,c,x,sum;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    scanf("%d",&x);
	    
	    
	    if(a+b>=x)
	    {
	        printf("YES\n");
	    }
	    else if(b+c>=x)
	    {
	        printf("YES\n");
	    }
	   else if(c+a>=x)
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

