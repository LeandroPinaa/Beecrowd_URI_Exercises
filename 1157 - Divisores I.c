#include <stdio.h>
 
int main() {
int N,a=1;
scanf("%d",&N);
while(a<=N){
    if(N%a==0){
        printf("%d\n",a);
    }
    a++;
}
    return 0;
}
