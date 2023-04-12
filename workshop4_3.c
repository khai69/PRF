#include <stdio.h>
#include <math.h>


void menu(){
	printf("1-Fibonanci sequence\n");
	printf("2-Date valid or not\n");
	printf("3-Quit\n");
}



int getUserchoice(){
	fflush(stdin);
	int op;
	while (op<1||op>3){
		printf("Enter your choice(1-3)");
		scanf("%d",&op);
	}
	return op;
}


int Fibonanci(int n){
	int i,f;
	int t1=1,t2=1;
	if (n==1) return 1;
	while (f<n){
		f=t1+t2;
		t1=t2;
		t2=f;
	} if(n==f)	return 1;
else return 0;
}


int Date(int d,int m,int y){
	
int maxd = 31; 
if ( d<1 || d>31 || m<1 || m>12) return 0;

if ( m==4 || m==6 || m==9 || m==11) maxd=30;
else if (m==2) {
            
             if ( y%400==0 || ( y%4==0 && y%100==0) )maxd=29;
             else maxd=28;
       }
return d<=maxd;
}  


int main(){
	int n;
	int op;
	int d,m,y;
	menu();
	op=getUserchoice();
 	printf("You entered option %d\n",op);
	switch (op) {
		case 1:
			printf("Enter n ");
			scanf("%d",&n);
			if (Fibonanci(n)){
				printf("It is a Fibonanci Element");
			}else printf("It is not fibonanci Element");
			break;
			case 2:
				printf("Enter d,m,y");
            	scanf("%d %d %d",&d,&m,&y);
 	            if(Date(d,m,y)){
 	         	printf("Validdate");
	 }else{
	 
	  printf("invalidDate");}
	 
				break ;
			    default:break;
	}
	printf("\n");
	return 0;
}


