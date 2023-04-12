// viet ham sort (int *pA,int *pB)
// sap xep bien lon la a va bien nho bang b
//vao bien b voi a,b dc nhap tu phim'
//trong ham main a=3,b=6
// swap &a &b=>a=6,b=3
#include<stdio.h>
 
 void swap(int *pA,int *pB){
 	int temp=*pA;
 	 *pA=*pB;
 	
 }
 int main (){
 	int a,b;
 	printf("Enter a and b");
 	scanf("%d%d",&a,&b);
 	swap(&b,&a);
 	printf("a=%d,b=%d\n");
 	return 0;
 }
