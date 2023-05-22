#include <stdio.h>

int main() 
{
	int t,b,g,left;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&g);
	    scanf("%d",&b);
	    
	    left=b-g;
	    printf("%d\n",left);
	}
	return 0;
}
