#include <stdio.h>
 
int main() {
int X,Y,a,b=0;
scanf("%d%d",&X,&Y);
if(X<Y){
    for(a=X;a<=Y;a++){
        if(a%13!=0){
            b=b+a;
        }
    }
}
else{
    for(a=Y;a<=X;a++){
        if(a%13!=0){
            b=b+a;
        }
    }
}
printf("%d\n",b);
    return 0;
}
