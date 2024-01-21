#include <stdio.h>
 
int main() {
int P1,NP1,P2,NP2;
float VUP1,VUP2,total;
scanf("%d%d%f%d%d%f",&P1,&NP1,&VUP1,&P2,&NP2,&VUP2);
total = NP1*VUP1+NP2*VUP2;
printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
