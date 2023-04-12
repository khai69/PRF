#include <stdio.h>
#include<math.h>
#include <time.h>


int Random(int a, int b){
	return(a + rand() % (b-a+1));
}


void main (){
	srand(time(0));
	int total,x,y;
	int check;
	int count ;
	printf("Xuc Xac\n");
	do {
		printf("Total \n:");
		fflush(stdin);
		check=scanf("%d",&total);
		if(check !=1|| total <2||total >12) printf("Try again\n");
		
	} while(check !=1|| total <2||total >12 );{
	 count =1;}
	 do{
	 
	 x=Random(1,6);
	 y=Random(1,6);
	 printf("So lan ra duoc ket qua %d : %d + %d\n",count++,x,y);
	 }while (x+y!= total);
	 	printf("duoc ket qua trong %d lan ",count);
	 }
	 
