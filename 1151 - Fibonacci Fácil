#include <stdio.h>

int f(int N){
    if(N==0||N==1)
        return N;
    else
        return f(N-1)+f(N-2);
}
int main(){
int N,a=0;
scanf("%d",&N);
while(a<N-1){
    printf("%d ",f(a));
    a++;
}
printf("%d\n",f(N-1));
    return 0;
}
