#include <stdio.h>
int main(){
	int *pA=(int*)malloc(sizeof(int));
	int *pB=(int*)malloc(sizeof(int));
	printf("Enter a and b");
	scanf("%d%d",pA,pB);
	
	printf("pA=%d,pB=%d",*pA,*pB);
	printf("ket qua:%.2lf",(double)(*pA+*pB)/2);
	return 0;
}
