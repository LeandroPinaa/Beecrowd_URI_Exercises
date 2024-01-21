#include <stdio.h>
 
int main() {
double X,N[100];
int a;
scanf("%lf",&X);
for(a=0;a<100;a++){
    N[a]=X;
    X=X/2;
}
for(a=0;a<100;a++)
    printf("N[%d] = %.4lf\n",a,N[a]);
    return 0;
}
