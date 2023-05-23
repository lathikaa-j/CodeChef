#include <stdio.h>

int main() 
{
	int t,sa,sb,sc,small;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&sa,&sb,&sc);
        small= sa<sb?(sa<sc?sa:sc) : (sb<sc?sb:sc);
        
        if(small==sc)
        {
        printf("Alice\n");
        }
        else if(small==sb)
         {
        printf("Bob\n");
        }
        else
         {
        printf("Draw\n");
        }
	}
	return 0;
}

