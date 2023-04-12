#include<stdio.h>
int main(){
int h, m, s;
scanf("%d %d %d", &h, &m, &s);
m = m + 30;
if (m >= 60){
h++;
m -= 60;
}
if (h >= 24){
h -= 24;
}
printf("%d:%d:%d", h, m, s);
}
