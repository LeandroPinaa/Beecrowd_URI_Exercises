#include <stdio.h>
 
int main() {
int A,B,C,MetrosQuadrados,X,MedidaLadoTerreno;
while(1){
    scanf("%d%d%d",&A,&B,&C);
    if(A==0)
        break;
    MetrosQuadrados=A*B;
    X=(MetrosQuadrados*100)/C;
    MedidaLadoTerreno=pow(X,.5);
    printf("%d\n",MedidaLadoTerreno);
}
    return 0;
}
