#include<stdio.h>
#define Max_Size 100
// khai bao prototype =========
int menu();//in menu yeu cau nguoi dung nhap 1 option
int isFull(int*a,int n);// kiem tra mang co full hay k
int isEmpty(int*a,int n);// kiem tra mang co empty hay k
/*void add(int x,int *a,int pn);//them 1 phan tu vao mang
int search(int x,int *a,int*n);//tim kiem 1 phan tu trong mang
int removeOne(int pos,int*a,int n);//xoa 1 phan tu tai vi tri pos
int remoteAll(int x,int *a,int*pn);//xoa tat ca cac phan tu cua x
void printASC(int *a,int n);// in theo thu tu tang dan cua mang
void printDesc(int *a,int n);// in ra thu tu giam dan cua mang
void print(int*a,int n);//in ra cac phan tu cua mang */



int menu(){
	printf("One Dimensional Array of Integers\n");
	printf("1-Add a value\n");
	printf("2-Search a value\n");
	printf("3-Remove of the first existenctr of a value\n");
	printf("4- Remove all\n");
	printf("5-print out the array\n");
	printf("6-print out the array int ascending order\n");
	printf("7-print out the array int descending order\n");
	printf("Others-Quit\n");
	printf("Select:");
	int choice;
	fflush(stdin);
	scanf("%d",&choice);
	
}

int isFull(int*a,int n){
	return n==Max_Size;
	
}

int isEmpty(int*a,int n){
	return n==0;
}

void add (int x,int*a,int*pn){
	if(isFull(a,*pn)!=1){
		a[*pn]=x;
		(*pn)++;
	}
}

int search(int x,int*a,int n){
	int i;
	for(i=0;i<n;i++){
		
		if(a[i]==x)
		return i;
	}
	return -1;
	}
int removeOne(int pos,int*a,int *pn){
	if(isEmpty(a,*pn)==1) return 0;
	int i ;
	for(i=pos+1;i<*pn;i++){
		a[i-1]=a[i];
	}
	(*pn)--;
	return 1;
	
}
int removeAll(int x,int*a,int *pn){
	if(isEmpty(a,*pn)==1) return 0;
	int pos;
	do{
		pos=search(x,a,*pn);
		if(pos != -1){
			removeOne(pos,a,pn);
		}
	} while(pos!= -1);
	return 1;
}

void printAsc(int *a,int n){
	int b[Max_Size];
	int i;
	// coppy a vao b
	for (i=0;i<n;i++){
		b[i]=a[i];
	}
	int j;
	
	
	for (i=0;i<n-1;i++){
		for(j=n;j>i;j--){
			if(b[j]>b[j-1]){
				int temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	 printf("%d",b[i]);  // in nguoc la (i=n-1;i>=0;i--);
	 printf("\n");      
}  
  void printDesc(int *a,int n){
  		int b[Max_Size];
	int i;
	// coppy a vao b
	for (i=0;i<n;i++){
		b[i]=a[i];
	}
	int j;
	
	
	for (i=0;i<n-1;i++){
		for(j=n;j>i;j--){
			if(b[j]>b[j-1]){
				int temp=b[j];
				b[j]=b[j-1];
				b[j-1]=temp;
				
			}
		}
	}
	for(i=n-1;i>=0;i--)
	 printf("%d",b[i]);  // in nguoc la (i=n-1;i>=0;i--);
	 printf("\n");      
}  
  


void print(int*a,int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d",a[i]);
		printf("\n");
	}
}



int main(){
	int a [Max_Size] ,n=0;
	int x,pos;
	int choice;
	int i;
	do {
	int	choice=menu();
		fflush(stdin);
		switch(choice){
			case 1:	
				
					printf("a[%d]=",n);
					scanf("%d",&a[i]);
				
			
				add(x,a,&n);
				break;
			case 2:
				printf("Enter a value to be searched");scanf("%d",&x);
				pos=search(x,a,n);
				if (pos==-1) printf("not found");
				else printf("Index of %d in a is %d\n",x,pos);
				break;
			case 3:
				printf("Enter a value to be removed");scanf("%d",&x);
				pos=search(x,a,n);
				if(pos!=-1){
					removeOne(pos,a,&n);
					printf("Succesfully removed %d from a\n",x);
				} else {
					printf("Not found %d in a\n",x);
				}
				break;
				
			case 4:
				printf("Enter a value to remove all:");
				scanf("%d",&x);
				if(removeAll(x,a,&n)==1) printf("Remove all %d in a\n",x);
				else printf("Can not remove %d in a \n",x);
				break;
				 case 5:
				 	printAsc(a,n);break;
				 	case 6:
				 		printDesc(a,n);break;
				 		case 7:
				 			print(a,n);break;
				 			default:break;
		}
	}while (choice >=1 && choice <=7);
	return 0;
}
