#include <stdio.h>
 
int main() {
int A,B,C,maiorAB,maiorABC;
scanf("%d%d%d",&A,&B,&C);
maiorAB=(A+B+abs(A-B))/2;
maiorABC=(C+maiorAB+abs(C-maiorAB))/2;
printf("%d eh o maior\n",maiorABC);
    return 0;
}
