#include <stdio.h>
#include <math.h>

double giaithua(int n){
	double p=1;
	int i;
	for (i=1;i<=n;i++)
	{
		p*=i;
	}
	return p;
}
int main (){
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Ket qua la:%lf",giaithua(n));
	return 0;
}
