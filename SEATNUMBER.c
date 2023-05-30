#include <stdio.h>

int main() {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n>=1 && n<=10)
	    {
	        printf("Lower Double\n");
	    }
	    else if(n>10 && n<=15)
	    {
	        printf("Lower Single\n");
	    }
	    else if(n>15 && n<=25)
	    {
	        printf("Upper Double\n");
	    }
	    else 
	    {
	        printf("Upper Single\n");
	    }
	}
	return 0;
}

