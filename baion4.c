#include<stdio.h>
#include<math.h>


int isPrime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	} return n>1;
}

int main(){
	int n;
	int i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
		for(i=0;i<n;i++)
			if(isPrime(a[i])){
				printf("%d",i);
				break;
			}
		
		if(i==n) printf("-1");
	
	return 0;
}
