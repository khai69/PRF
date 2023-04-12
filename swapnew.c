#include <stdio.h>

int main (){
	int x,y;
	int t;

	   do{
	   
	   
	 
	scanf("%d%d",&x,&y);
	   t=x;
	   x=y;
	   y=t;
  
	    printf("%d %d",x,y);}
	     while(x!=0 && y!=0);
	

	return 0;
}
