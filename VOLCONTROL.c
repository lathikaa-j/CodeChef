#include <stdio.h>

int main() 
{
    int t,x,y;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        
        if(x>y)
        {
            printf("%d\n",x-y);
        }
        
        else
        {
            printf("%d\n",y-x);
        }
    }
    
	
	return 0;
}

