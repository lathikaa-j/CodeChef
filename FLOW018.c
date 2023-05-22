#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);

	while(t--)
	{
	    int a,b=1,n;
	    scanf("%d",&n);
	    for(a=n;a>=1;a--)
	    {
	        b=b*a;
	    }
	    printf("%d\n",b);
	}
	return 0;
}


