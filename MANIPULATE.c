#include <stdio.h>

int main() 
{
    int t,x,y;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        
        if(x>=y)
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

