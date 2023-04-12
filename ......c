#include <stdio.h>
#include <math.h>

int main(){
	
	int i,n;
	scanf("%d",&n);
	int sum=1000;
	for(i=n;i>0;i-=2)
	
		sum-=i;
	
	
	printf("%d",sum);
}
