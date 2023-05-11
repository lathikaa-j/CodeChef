#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&x);
        scanf("%d",&y);

       if(x<y)
       {
           printf("FIRST\n");
       }

       else if(y<x)
       {
           printf("SECOND\n");
       }

    else{

        printf("ANY\n");
        }

    }

    return 0;

}




