#include <stdio.h>

int main() {
	int t,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	if(x<=3)
	{
	    printf("BRONZE\n");
	}
	else if(x>=3 && x<=6)
	{
	    printf("SILVER\n");
	}
	else
	{
	    printf("GOLD\n");
	}
	}
	return 0;
}

