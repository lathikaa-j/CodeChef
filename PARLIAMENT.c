
#include <stdio.h>
int main() 
{
	int t,x;
	float n;
	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%f",&n);
	    scanf("%d",&x);
	    //printf("%f",n/2);
	    if(x>=n/2)
	    {
	        printf("YES\n");
	    }
	    
	    else{
	     printf("NO\n");
	    }
	    
	}
	
	return 0;
}
