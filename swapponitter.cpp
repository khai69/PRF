#include <stdio.h>
void swap (int *pA,int *pB){
	int temp =*pA;*pA=*pB;*pB=temp;
	
}
 int main (){
 	int a,b;
 	printf("Enter a and b");
 	scanf("%d%d",&a,&b);
 	swap(&a,&b);
 	printf("a=%d,b=%d\n",a,b);
 }
