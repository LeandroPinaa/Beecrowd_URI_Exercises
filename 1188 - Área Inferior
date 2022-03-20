#include <stdio.h>
 
int main() {
int l,c;
double M[12][12],B=0.0;
char nome[0];
scanf("%s",nome);
for(l=0;l<12;l++)
    for(c=0;c<12;c++)
        scanf("%lf",&M[l][c]);
for(l=7;l<12;l++)
    for(c=12-l;c<l;c++)
        B+=M[l][c];
if(nome[0]=='M')
    B=B/30.0;
printf("%.1lf\n",B);
    return 0;
}
