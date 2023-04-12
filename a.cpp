#include <stdio.h>

int main(){
int i;
int t=0;
int k=1;
for(i=0;i<10 &&k==1;i++)
if(!(i%3))
  k=0;
  else 
  t+=i;
  printf("%d",t);

}
