#include <stdio.h>
 
int main() {
int l,c,C;
double M[12][12],B=0;
char T[5];
scanf("%d",&C);
scanf("%s",T);
for(l=0;l<12;l++)
    for(c=0;c<12;c++)
        scanf("%lf",&M[l][c]);
for(l=0;l<12;l++)
    B+=M[l][C];
if(T[0]=='S')
    printf("%.1lf\n",B);
if(T[0]=='M')
    printf("%.1lf\n",B/l);
    return 0;
}
