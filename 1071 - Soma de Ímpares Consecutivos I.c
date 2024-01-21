#include <stdio.h>
 
int main() {
int X,Y,a,B=0;
scanf("%d%d",&X,&Y);
if(X<Y){
    for(a=X+1;a<Y;a++)
        if(a%2!=0)
             B+=a;
}
else{
    for(a=Y+1;a<X;a++)
        if(a%2!=0)
            B+=a;
}
printf("%d\n",B);
    return 0;
}
