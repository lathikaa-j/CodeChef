#include <stdio.h>

int main() 
{
	int t,a,b,c,large;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    
	   large= a>b ? (a>c?a:c) : (b>c?b:c);
	   printf("%d\n",large);
	}
	return 0;
}

