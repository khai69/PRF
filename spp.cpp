#include<stdio.h>
 
 int  sort(int *pA,int *pB){
 	 int temp;
 	 if (*pA<*pB){
 	 	 temp=*pA;
 	 	*pA=*pB;
 	 	*pB=temp;
 	
	  }
 	
 }
 int main (){
 	int a,b;
 	printf("Enter a and b");
 	scanf("%d%d",&a,&b);
 	sort(&a,&b);
 	printf("a=%d,b=%d\n",a,b);
 	return 0;
 }
