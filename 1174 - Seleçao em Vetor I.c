#include <stdio.h>
 
int main() {
int a;
double A[100];
for(a=0;a<100;a++)
    scanf("%lf",&A[a]);
for(a=0;a<100;a++){
    if(A[a]<=10)
        printf("A[%d] = %.1lf\n",a,A[a]);
}
    return 0;
}
