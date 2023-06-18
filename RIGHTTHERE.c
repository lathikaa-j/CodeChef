#include <stdio.h>
int main() {
	int t,x,n;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d",&n);
	  scanf("%d",&x);
	  if(n>x)
	  {
	      printf("NO\n");
	  }
	  else
	  {
	      printf("YES\n");
	  }
	}
	return 0;
}
