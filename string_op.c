#include <stdio.h>
#include<string.h>
int main (){
	printf("*** strlen demo ***\n");
	char s1[100]="Hello";
	printf("%d\n",strlen(s1));
	printf("**** string coppy demo****\n");
	char s2[100];
	int i;
	for (i=0;i<strlen(s1);i++){
	
	s2[i]=s1[i];
}
 s2[strlen(s1)]='\0';
 char s3[100];
 strcpy(s3,s1);
 printf("s2=%s\n",s2);
  printf("s3=%s",s3);
  printf("#### string compare####\n");
  char s4[100]="Hello 1";
  char s5[100]="Hello 1";
  char s6[100]="Hello 2";
  // strcmp (char s1[] ,char s2[])
  // ney chuoi s1 giong s2 ->0
  // neu s1>s2 -> 1
  // s1<s2 ->-1
  printf("s4=s5:%d\n",strcmp(s4,s5));
   printf("s5<s6:%d\n",strcmp(s5,s6));
  printf("s6>s5:%d",strcmp(s6,s5));
  
  printf(" strcat demo");
  char s7[100]="Hello";
  char s8[100]="World";
  strcat(s7,s8); // noi s7 voi s8
  printf("s7=%s\n",s7);
  printf("STRLWR STRUPR DEMO");
  char s9[100]="khai";
  strupr(s9);printf("s9=%s\n",s9);
  strlwr(s9);printf("s9=%s\n",s9);
  printf("STRSTR demo");
  char s10[100]="Hello world";
  char s11[10]="Hell";
  char *subString =strstr(s10,s11);
  printf("Chuoi tim dc :%s\n",subString);
  return 0;
	return 0;
}
