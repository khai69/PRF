#include <stdio.h>
#include <string.h>


void input(char s[][31],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Chuoi thu %d",i);
		fflush(stdin);
		scanf("%30[^\n]",s[i]);
		strupr(s[i]);
	}
}  


 void output(char s[][31],int n){
 	int i;
 	for(i=0;i<n;i++) puts(s[i]);
 	
 }
 void sort(char s[][31],int n){

   int i,j;
   for (i=0;i<n-1;i++){
   	for(j=n;j>i;j--){
   		if(strcmp(s[j],s[j-1])==-1){
   			char temp[31];
   			strcpy(temp,s[j]);
   			strcpy(s[j],s[j-1]);
   			strcpy(s[j-1],temp);
		   }
	   }
   }
}

int main(){
	char s[100000];
	int n;
	printf("Nhap n");
	scanf("%d",&n);
	input(s,n);
	sort(s,n);
	output(s,n);
	return 0;
}
