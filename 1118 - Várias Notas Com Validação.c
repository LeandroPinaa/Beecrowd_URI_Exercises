#include <stdio.h>
 
int main() {
float X,A,B;
A=B=0;
while(1){
    scanf("%f",&X);
    if(X<0||X>10)
        printf("nota invalida\n");
    else{
        A+=X;
        B++;
        if(B==2){
            printf("media = %.2f\n",A/B);
            printf("novo calculo (1-sim 2-nao)\n");
            while(1){
                scanf("%f",&X);
                if(X==1){
                    A=B=0;
                    break;
                }
                else if(X==2)
                    return 0;
                else
                    printf("novo calculo (1-sim 2-nao)\n");
            }
        }
    }
}
    return 0;
}
