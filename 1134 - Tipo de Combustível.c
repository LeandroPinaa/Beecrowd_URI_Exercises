#include <stdio.h>
 
int main() {
int X,A,G,D;
A=G=D=0;
while(1){
    scanf("%d",&X);
    if(X==1){
        A++;
    }
    else if(X==2){
        G++;
    }
    else if(X==3){
        D++;
    }
    else if(X==4){
        break;
    }
    else{
        continue;
    }
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n",A);
printf("Gasolina: %d\n",G);
printf("Diesel: %d\n",D);
    return 0;
}
