#include <stdio.h>
 
int main() {
int N,a=0,A=1,B=1,C=1;
scanf("%d",&N);
while(a<N){
    printf("%d %d %d\n",A,B,C);
    A++;
    B=A*A;
    C=A*A*A;
    a++;
}
    return 0;
}
