#include <stdio.h>

int main(){
int A,B,X,Y,q,r;
scanf("%d%d",&A,&B);
if(A<0){
    X=B;
    if(B<0)
    	X=B*-1;
    for(r=0;r<X;r++){
        Y=A-r;
        if(Y%B==0)
        	break;
    }
    q=Y/B;
}
else{
    q=A/B;
    r=A%B;
}
printf("%d %d\n",q,r);
    return 0;
}
