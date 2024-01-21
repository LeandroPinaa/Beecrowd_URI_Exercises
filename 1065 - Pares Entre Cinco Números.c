#include <stdio.h>
 
int main() {
int x=0,count=0;
while(x<5){
    int y;
    scanf("%d",&y);
    if(y%2==0){
        count++;
    }
    x++;
}
printf("%d valores pares\n",count);
    return 0;
}
