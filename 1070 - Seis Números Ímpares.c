#include <stdio.h>
 
int main() {
int x,y,z;
scanf("%d",&x);
z=x+11;
for(y=x;y<=z;y++){
    if(y%2!=0){
        printf("%d\n",y);
    }
}
    return 0;
}
