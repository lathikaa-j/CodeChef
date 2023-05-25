#include <stdio.h>

int main() {
	int t,z,y,a,b,c,sum,diff;
	scanf("%d",&t);
	while (t--)
	{
	  scanf("%d",&z);
	  scanf("%d",&y);
	  scanf("%d",&a);
	  scanf("%d",&b);
	  scanf("%d",&c);
	  sum=a+b+c;
	  diff=z-y;
	  if(sum<=diff)
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

