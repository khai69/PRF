#include <stdio.h>

int sumDigits(int n){
	int sum=0;
	do {
		int r=n%10;
		n=n/10;
		sum+=r;
	}
	while (n>0);
	return sum;
}
int main(){
	int n;

    do {
        printf("N = ");
        scanf("%d", &n);
        printf("Sum digits = %d\n", sumDigits(n) );
    } while (n >= 0);
    return 0;
}
