#include <stdio.h>
#include <string.h>
#include<ctype.h>


int main(){
	char s[200];
	char c[200];
	int L;
	L=strlen(s);
	int i,j;
	scanf("%[^\n]",s);
	for(i=0,j=0;s[i]!='\0';i++){
		if(i%3 ==0 && i != 0){
			c[j]='-';
			j++;
		}
		c[j]=s[i];
		j++;
	}
	c[j]='\0';
	printf(c);
	return 0;
}
