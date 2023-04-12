#include <stdio.h>
#include <math.h>

int main (){
	int n;
	int i;
	int x;
	int sum;
	sum=0;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++){
		sum += pow(-1, i + 1)*pow(x,i);
	}
	printf("%d",sum);
}
