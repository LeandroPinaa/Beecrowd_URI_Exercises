#include <stdio.h>
 
int main() {
int N,a=0,X,b=1,count=0;
scanf("%d",&N);
while(a<N){
    scanf("%d",&X);
    while(b<=X){
        if(X%b==0){
            count++;
        }
        b++;
    }
    a++;
    if(count==2){
        printf("%d eh primo\n",X);
    }
    else{
        printf("%d nao eh primo\n",X);
    }
    count=0;
    b=1;
}
    return 0;
}
