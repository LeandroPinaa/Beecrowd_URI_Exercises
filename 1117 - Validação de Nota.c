#include <stdio.h>
 
int main() {
float X,A,B;
A=B=0;
while(1){
    scanf("%f",&X);
    if(X<0.0||X>10.0){
        printf("nota invalida\n");
    }
    else{
        A=A+X;
        B++;
        if(B==2){
            printf("media = %.2f\n",A/2);
            break;
        }
    }
}
    return 0;
}
