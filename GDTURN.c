#include<stdio.h>
int main()
{
    int t,x,y,sum;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        
        sum=x+y;
        
        if(sum>6)
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
    
    
    
