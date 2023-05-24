#include <stdio.h>

int main()
{
	int t,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    if(x>65)
	    {
	        printf("Overload\n");
	    }
	    else if(x<35)
	    {
	        printf("Underload\n");
	    }
	    else
	    {
	        printf("Normal\n");
	    }
	}
	return 0;
}

