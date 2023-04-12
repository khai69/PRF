#include <stdio.h>

int main(){
	int n;
	int i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			printf("Khong tang dan");
			break;
		}
		
	}
	if(i==n-1)
			printf("tang dan");
	
	return 0;
}
