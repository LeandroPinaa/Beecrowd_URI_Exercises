#include<stdio.h>

int main(){
long long int n,primeiro=0,segundo=1,prox,c;
int T,a;
scanf("%d",&T);
for(a=1;a<=T;a++,primeiro=0,segundo=1){
	scanf("%lld",&n);
    n=n+1;
    for(c=0;c<n;c++){
    	if(c<=1)
    		prox=c;
        else{
        	prox=primeiro+segundo;
            primeiro=segundo;
            segundo=prox;
    	}
    }
    printf("Fib(%lld) = %lld\n",n-1,prox);
}
   return 0;
}
