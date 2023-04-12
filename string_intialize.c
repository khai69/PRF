#include <stdio.h>
#include<string.h>
int main (){
	char s1[100]="Hello";
	// null byte (\0) se tu dong dc them vao
	char s2[100]={'H','e','l','l','o','\0'};
	char*s3 =(char *)malloc(100);
	s3[0]='H',s3[1]='e',s3[2]='l',s3[3]='l',s3[4]='o',s3[5]='\0';
	printf("s1=%s\n",s1);
	printf("s2=%s\n",s2);
	printf("s3=%s\n",s3);
	}
