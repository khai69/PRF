#include <stdio.h>
#include <math.h>
#include <time.h>


int random(int a,int b){
	return (a+rand()%(b-a+1));
}


int main(){
	int x,y;
	int total;
		srand(time(NULL));
	int check,count;
	printf("Xuc xac\n");
	printf("*************\n");
	do{
	
     fflush(stdin);
	printf("total\n ");
	check=scanf("%d",&total);
	if(check !=1||total<2||total>12) printf("Try again");
  }	while (check !=1||total<2||total >12); count =1;
  do{
  
	x=random(1,6);
	y=random(1,6);
	printf("So lan de dc ket qua la %d:%d + %d\n",count++,x,y);
}
while (x+y!=total);
printf("dc ket qua trong %d lan\n",count);
}
