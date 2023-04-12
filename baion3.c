#include<stdio.h>


int main (){
	int n,i,j,m;
	scanf("%d%d",&n,&m);
	for (i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(i==1||j==m||i==n||j==1){
				printf("* ");
			} 
			else printf("  ");
		}
	
	printf("\n");
	
	}
	return 0;
}
