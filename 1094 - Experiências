#include <stdio.h>
 
int main() {
int N,a=0,total,quant,C=0,R=0,S=0;
char Nome[2];
double PC,PR,PS;
scanf("%d",&N);
while(a<N){
    scanf("%d %s",&quant,Nome);
    if(Nome[0]=='C'){
        C=C+quant;
    }
    if(Nome[0]=='R'){
        R=R+quant;
    }
    if(Nome[0]=='S'){
        S=S+quant;
    }
    a++;
}
total=C+R+S;
PC=(double)(C*100)/total;
PR=(double)(R*100)/total;
PS=(double)(S*100)/total;
printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",C);
printf("Total de ratos: %d\n",R);
printf("Total de sapos: %d\n",S);
printf("Percentual de coelhos: %.2lf %%\n",PC);
printf("Percentual de ratos: %.2lf %%\n",PR);
printf("Percentual de sapos: %.2lf %%\n",PS);
    return 0;
}
