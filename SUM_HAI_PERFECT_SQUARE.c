#include <stdio.h>
#include <math.h>


int SUMSQUARE(int n){
  int i,j;
  for(i=0;i*i<=n;i++)
  	for(j=0;j*j<=n;j++)
  		if(i*i+j*j==n){
  			return 1;
		  } 
		   return 0;
	  
}




int main() {
int n;
printf("Enter an integer: ");
scanf("%d", &n);
if(SUMSQUARE(n)){
	printf("%d is result of 2 perfect square",n);
} else {

printf("%d is not sum of 2 square ",n);
}
return 0;
}
