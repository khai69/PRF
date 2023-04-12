#include <stdio.h>


int main (){
	int n;
	int i;
	int sum=0;
	scanf("%d",&n);
	i=1;
	while(1){
		sum+=i;
		if(sum>n){
			printf("%d",i-1);
			break;
		} 
		i++;
	} 
	
}
