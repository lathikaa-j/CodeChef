#include <stdio.h>

int main() 
{
    int t,a,b,small;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        small= a<b?a:b;
        if(a>=b||a<b)
        {
            printf("%d\n",small);
        }
    }
	return 0;
}

