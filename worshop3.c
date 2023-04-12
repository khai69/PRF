
#include <stdio.h>
int sd(int n,int m){
	int sum=0;
	int i;
	
	int count =0;
	for (i=2;i<=n;i++){
		if(n%i==0 && count <m){
			sum+=i;
			count++;}
		}
		return sum;
	}
	


 int main(){
 
  	int m,n;
 	printf("Enter m and n :");
 	scanf("%d%d",&m,&n);
 	printf("ketquala=%d",sd(n,m));
 	return 0;
}
