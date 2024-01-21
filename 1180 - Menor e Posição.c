#include <stdio.h>
 
int main() {
int N,a,m,p;
scanf("%d",&N);
int X[N];
for(a=0;a<N;a++)
    scanf("%d",&X[a]);
m=X[0];
for(a=1;a<N;a++){
    if(m>X[a]){
        m=X[a];
        p=a;
    }
}
printf("Menor valor: %d\nPosicao: %d\n",m,p);
    return 0;
}
