#include <stdio.h>
 
int main() {
int N,a=0,X,b=1,B=0;
scanf("%d",&N);
while(a<N){
    scanf("%d",&X);
    while(b<X){
        if(X%b==0){
            B+=b;
        }
        b++;
    }
    a++;
    if(B==X){
        printf("%d eh perfeito\n",X);
    }
    else{
        printf("%d nao eh perfeito\n",X);
    }
    B=0;
    b=1;
}
    return 0;
}
