#include <stdio.h>

int main() {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    y=x-10;
	    if(x>100)
	    {
	        printf("%d\n",y);
	    }
	    else
	    {
	        printf("%d\n",x);
	    }
	}
	return 0;
}

