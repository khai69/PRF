#include <stdio.h>
#include<math.h>
int isPrime(int n){
	int i;
	int result=1;
	if (n<2){
		printf("n khong phai la so nguyen to");
	}
	if(n>2){
	
	for (i=2;i<=sqrt(n);i++){
		if(n%i==0){
			result=0;
			break;
		}
		return result;
		
	}
}
}

 int main(){
 	int n;
 	printf("Enter n");
 	scanf("%d",&n);
 	if(isPrime(n)==0){
 		printf("n khong phai la so nguyen to");
	 }else{
	 	printf("n  la so nguyen to");
	 }
	 return 0;
 }
