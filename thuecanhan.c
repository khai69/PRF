#include <stdio.h>


int taf (int n){
	double pa=9000000;
	double pd=3600000;
	int tf;
	printf("enter n");
	scanf("%d",&n);
	tf=12*(pa+n*pd);
	return tf;
}


int main(){
	double ti;
	int n;
	double tf;
	double kq;
	double income;
	printf("Enter your income");
	scanf("%lf",&income);
	ti=income-taf(n);

			if(ti<=5000000){
			kq=ti*0.05;
			}
			else if (5000000<ti<10000000){
				kq=ti*0.1;
			}else if(10000001<ti<18000000){
				kq=ti*0.15;
			}else {
				kq=ti*0.2;
			}
			
				printf("Incometax is:%lf",kq);
			
	
	
	return 0;
	
}
