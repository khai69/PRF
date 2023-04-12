#include <stdio.h>
#include <math.h>
int isArmstrong(int n) {
int originalNum, remainder, result = 0, count = 0;
float power;
originalNum = n;
while (originalNum != 0) {
originalNum /= 10;
count++;
}
originalNum = n;
while (originalNum != 0) {
remainder = originalNum % 10;
power = pow(remainder, count);
result += power;
originalNum /= 10;
}
return (result==n);
}
int main() {
int n;
scanf("%d", &n);
if (isArmstrong(n) == 1) printf("%d is an armstrong number.", n);
else printf("%d is not an armstrong number.", n);
return 0;
}
