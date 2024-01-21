#include <stdio.h>
int raio(int T){
int a=0,R1,R2;
while(a<T){
    scanf("%d%d",&R1,&R2);
    printf("%d\n",R1+R2);
    a++;
}
}
int main() {
int T;
scanf("%d",&T);
raio(T);
    return 0;
}
