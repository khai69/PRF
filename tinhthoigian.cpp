#include <stdio.h>
#include <time.h>
//tinh thoi gian chay cua CPU cho 1 ty lan lap viec cong 1 so nguyen
int main(){
	int i, s=0;
	time_t t1=time(0);
	for(i=0;i<1000000000;i++) s++;
	time_t t2=time(0);
	printf("difftime(t2,t1)=%lf\n",difftime(t2,t1));
	
	double r=0;
	t1=time(0);
	for(i=0;i<1000000000;i++) r++;
	t2=time(0);
	printf("difftime(t2,t1)=%lf\n",difftime(t2,t1));
	return 0;
}
