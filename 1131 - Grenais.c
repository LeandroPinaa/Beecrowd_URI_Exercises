#include <stdio.h>
 
int main() {
int A,B,INTER,GREMIO,EMPATE,X,TOTAL;
INTER=GREMIO=EMPATE=X=TOTAL=0;
while(1){
    scanf("%d%d",&A,&B);
    printf("Novo grenal (1-sim 2-nao)\n");
    TOTAL++;
    if(A>B){
        INTER++;
    }
    if(A<B){
        GREMIO++;
    }
    if(A==B){
        EMPATE++;
    }
    scanf("%d",&X);
    if(X==2){
        break;
    }
}
printf("%d grenais\n",TOTAL);
printf("Inter:%d\n",INTER);
printf("Gremio:%d\n",GREMIO);
printf("Empates:%d\n",EMPATE);
if(INTER>GREMIO){
    printf("Inter venceu mais\n");
}
else if(INTER>GREMIO){
    printf("Gremio venceu mais\n");
}
else{
    printf("Nao houve vencedor\n");
}
    return 0;
}
