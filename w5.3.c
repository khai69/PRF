#include <stdio.h>
#include <math.h>

void menu(){
	printf("Processing date data\n");
	printf("Character data\n");
	printf("Quit\n");
}

int getUserchoice(){
	fflush(stdin);
	int op;
	while( op<1 ||op>3){
		printf("Enter your choice\n");
		scanf("%d",op);
		
	}
	return op;
}


int Date(int d,int m,int y){
	int maxd=31;
	if(d<1||d>30||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxd=30;
  else	if (m==2){
		if(y%400==0||y%4==0 && y%100==0) maxd=29;
 else maxd=28;
}
return d<=maxd;
}

int main(){
	int n;
	int d,m,y;
	int op;
	menu();
	op=getUserchoice;
	printf("You entered your choice\n");
	switch(op){
		case 1:
			printf("Enter day month year\n");
			scanf("%d%d%d",&d,&m,&y);
			if(Date(d,m,y)){
				printf("Valid date");
			}else {
				printf("InValidDate");
			}
		default:	break;}
		return 0;}
			
			
			
			
			
			
			
			
			
			
			
	

