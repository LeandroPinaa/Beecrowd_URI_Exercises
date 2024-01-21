#include <stdio.h>
 
int main() {
int X,a=1;
while(1){
    scanf("%d",&X);
    if(X==0){
        break;
    }
    while(a<=X-1){
        printf("%d ",a);
        a++;
    }
    printf("%d\n",X);
    a=1;
}
    return 0;
}
