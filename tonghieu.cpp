#include <stdio.h>
int sumsign (int *pA,int *pB){
  int temp =*pA;
	 *pA=temp+*pB;
	      *pB=temp-*pB;
}
int main(){
	int a,b;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	sumsign(&a,&b);
	printf("a=%d,b=%d",a,b);
}
