#include <stdio.h>

int main() {
char NOME[10];
double SF,TVM,TOTAL;
scanf("%s%lf%lf",NOME,&SF,&TVM);
TOTAL = SF+TVM*0.15;
printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
