#include <stdio.h>

int main() 
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        
        if(a>0 && b>0)
        {
            printf("Solution\n");
        }
        else if(b==0)
        {
            printf("Solid\n");
        }
        else 
        {
            printf("Liquid\n");
        }
    }
	return 0;
}

