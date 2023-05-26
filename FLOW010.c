#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    char x;
    while(t--)
    {
        scanf(" %c",&x);
          switch(x)
	    {
	        case 'B':
	        case 'b': printf("Battleship\n");
	        break;
	        
	        case 'C': 
	        case 'c': printf("Cruiser\n");
	        break;
	        
	        case 'D': 
	        case 'd': printf("Destroyer\n");
	        break;
	        
	        case 'F':
	        case 'f': printf("Frigate\n");
	        break;
	    }
    }
    return 0;
}
