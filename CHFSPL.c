#include <stdio.h>

int main() 
{
    int t,a,b,c,sum1,sum2,sum3,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        sum1=a+b;
        sum2=b+c;
        sum3=c+a;
        
        max= sum1>sum2? (sum1>sum3?sum1:sum3) : (sum2>sum3?sum2:sum3);
        printf("%d\n",max);
    }
	return 0;
}

