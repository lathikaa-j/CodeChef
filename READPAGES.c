#include <stdio.h>

int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&x);
        scanf("%d",&y);
        
        if(x*y>=n)
        {
            printf("YES\n");
        }
        
        else
         {
            printf("NO\n");
        }
    }
    
    return 0;
}

