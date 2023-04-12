#include<stdio.h>

void input(int*a,int n){
	
	int i;
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",a+i);
	}
}


int max_pos(int*a,int n){
		int vmax=a[0];
		int p_max=0;
	int i;
	for (i=1;i<n;i++){
	
	if (vmax<a[i]){
		vmax =a[i];
		p_max=i;}
	}
		return p_max;
	}

int min_pos(int*a,int n){
		int min=a[0];
		int p_min=a[0];
	int i;
	for(i=1;i<n;i++){
	
	if (min>a[i]){
	
	min=a[i];
	p_min=i;
	}}
	return p_min;
}

#define MAX_SIZE 10000
int main(){
	int a[MAX_SIZE];
	int n;
	printf("Enter n");
	scanf("%d",&n);
	
	input(a,n);
	printf("vi tri lon nhat trong mang :%d\n",max_pos(a,n));
	printf("vi tri nho nhat trong mang :%d\n",min_pos(a,n));
	return 0;
}
