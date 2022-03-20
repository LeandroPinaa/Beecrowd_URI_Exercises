#include <stdio.h>
 
int main() {
//X vai ser o aumento em numero para o PA
int T,a=0,X,Y,ANOS=0;
long int PA,PB;
double G1,G2;
scanf("%d",&T);
while(a<T){
    scanf("%ld%ld%lf%lf",&PA,&PB,&G1,&G2);
    while(PA<=PB){
        X=(PA*G1)/100;
        Y=(PB*G2)/100;
        PA+=X;
        PB+=Y;
        ANOS++;
    }
    a++;
    if(ANOS>100){
        printf("Mais de 1 seculo.\n");
    }
    else{
        printf("%d anos.\n",ANOS);
    }
    ANOS=0;
}
    return 0;
}
