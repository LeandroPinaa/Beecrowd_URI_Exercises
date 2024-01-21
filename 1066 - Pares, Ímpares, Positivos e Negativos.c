#include <stdio.h>
 
int main() {
int x=0,count1=0,count2=0,count3=0,count4=0;
while(x<5){
    int y;
    scanf("%d",&y);
    if(y%2==0){
        count1++;
    }
    if(y%2!=0){
        count2++;
    }
    if(y>0){
        count3++;
    }
    if(y<0){
        count4++;
    }
    x++;
}
printf("%d valor(es) par(es)\n",count1);
printf("%d valor(es) impar(es)\n",count2);
printf("%d valor(es) positivo(s)\n",count3);
printf("%d valor(es) negativo(s)\n",count4);
    return 0;
}
