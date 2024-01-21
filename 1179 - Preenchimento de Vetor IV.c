#include <stdio.h>
 
int main() {
int par[5],impar[5],a,b,c,X;
a=b=c=0;
while(a<15){
    scanf("%d",&X);
    if(X%2==0){
        par[b]=X;
        b++;
        if(b==5){
            for(b=0;b<5;b++)
                printf("par[%d] = %d\n",b,par[b]);
            b=0;
        }
    }
    if(X%2!=0){
        impar[c]=X;
        c++;
        if(c==5){
            for(c=0;c<5;c++)
                printf("impar[%d] = %d\n",c,impar[c]);
            c=0;
        }
    }
    a++;
}
for(a=0;a<c;a++)
    printf("impar[%d] = %d\n",a,impar[a]);
for(a=0;a<b;a++)
    printf("par[%d] = %d\n",a,par[a]);
    return 0;
}
