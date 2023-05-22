#include <stdio.h>

int main(void)
{ 
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==1 && b==0)
    {
        printf("https://www.codechef.com/contests");
    }
    else if(a==0)
    {
        printf("https://www.codechef.com/practice");
    }
    else 
    {
        printf("https://discuss.codechef.com");
    }
	
	return 0;
}

