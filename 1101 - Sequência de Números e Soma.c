#include <stdio.h>
 
int main() {
int M,N,a=0,b,c;
while(a<3){
    scanf("%d%d",&M,&N);
    if(M<=0||N<=0){
    	break;
    }
    else{
    	c=0;
        if(M<N){
            for(b=M;b<=N;b++){
                printf("%d ",b);
                c=c+b;
            }
            printf("Sum=%d\n",c);
        }
        else{
            for(b=N;b<=M;b++){
                printf("%d ",b);
                c=c+b;
            }
            printf("Sum=%d\n",c);
        }
    }
    a++;
}
    return 0;
}
