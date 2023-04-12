#include <stdio.h>
#include<math.h>

void menu(){
	printf("1- is prime or not\n");
	printf("2-min max digits\n");
	printf("3-quit\n");
	
	
}
 int getUserChoice(){
 	fflush(stdin);
 	int op;
 	while (op<1|| op>3){ // nhap sai thi co the nhap lai neu chon ngoai 1 va 4 (dung while)
 		printf("Enter your choice(1-3)");
 		scanf("%d",&op);
 	
	 }
	 return op;
 }
 
 
 int isPrime(int n){
 	int i;
 	int result=1;
 	if(n<=2){
 		result =0;
	 }
	 if(n>2){
	 	for (i=2;i<=sqrt(n);i++)
	 	if(n%i==0){
	 		result=0;
		 }
	 	
	 }
	 return result;
 }
 
 int MinMaxDigits(int n){
 	int digit;
 	int min;
	 int max;
 	digit=n%10;
 	n=n/10;
 	min=max=digit;
 	while (n>0){
	 
 	    digit=n % 10; /* Get the next digit */
        n = n / 10;
      
		
		 if (min > digit) min = digit;
		 else  if (max < digit) max = digit;
   } printf("minimum :%d\n",min);
   printf("maximum :%d\n",max);
}
 
 
 int main(){
 	int n;
 	int op;
 	menu();
 	op=getUserChoice();
 	printf("You entered option %d\n",op);
 		switch (op){
 			case 1:
 				printf("Enter n");
 				scanf("%d",&n);
 				if(isPrime(n)){
 					printf("%d is a prime number",n);
 					
				 }else printf("%d is not a prime number",n);
				 break;
				 
				 case 2:
				 	printf("Enter n");
				 	scanf("%d",&n);
				 	while(n<0);{
				 	 
			       MinMaxDigits(n);
                     }
				 	break;
				 	
 			
		 }
		 printf("\n");
		 
      return 0; 			
	 }
 	
