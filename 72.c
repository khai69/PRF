#include <stdio.h>


 int countNumCharacter(char c,char a[],int n){
 	int i;
 	int count =0;
 	for (i=0;i<n;i++){
 		if(a[i]==c){
 			count ++;
		 }
	 }
	 return count ;
	 
 }
 
 int search(char c,char *a,int n){
 	int i;
 	for (i=0;i<n;i++){
 		if(a[i]==c) return i;
	 }
	 return -1;
 }
 
 void add(char c,char *a,int *pn){
 	a[*pn]=c;
 	(*pn)++;
 }
 
 
 
 int main (){
 	char a[7],unique[7];
 	int i;
 	int n=0;
 	char c;
 	for (i=0;i<7;i++){
 		fflush(stdin);
 		scanf("%c",&c);
 		a[i]=c;
 		if (search(c,unique,n)==-1) add(c,unique,&n);
 		
 		
	 }
	 int cnt=0;
	 for (i=n-1;i>=0;i--){
	 	printf("%c %d\n",unique[i],countNumCharacter(unique[i],a,7));
	 	cnt++;
	 	if (cnt ==2) break;
	 }
	 return 0;
	 
 }
