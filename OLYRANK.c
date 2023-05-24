#include <stdio.h>

int main()
{
    int t,g1,g2,s1,s2,b1,b2,sum1,sum2;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&g1);
       scanf("%d",&s1);
       scanf("%d",&b1);
       scanf("%d",&g2);
       scanf("%d",&s2);
       scanf("%d",&b2);
       sum1=g1+s1+b1;
       sum2=g2+s2+b2;
       
       if(sum1>sum2)
       {
           printf("1\n");
       }
       else
       {
           printf("2\n");
       }
       
    }
	
	return 0;
}

