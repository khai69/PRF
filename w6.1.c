#include <stdio.h>


void input(){
	int i;
	int a[9];
	printf("Enter ISBN");
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
	}
}


int main(){
	input();
	int t,i;
	int a[9];
	t=t+a[i]*(10-i);
	if(t%11==0){
		printf("Valid");
	} if(t%11 !=0){
		printf("Invalid");
	}
	return 0;
}
	
