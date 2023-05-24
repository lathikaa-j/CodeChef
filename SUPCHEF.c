#include <stdio.h>

int main() 
{
	int t,m,n,k,a;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&m);
	    scanf("%d",&n);
	    scanf("%d",&k);
	    a=n*k;
	    if(a<m)
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

