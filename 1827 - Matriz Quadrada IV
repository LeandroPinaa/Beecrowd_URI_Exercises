#include <stdio.h>

int main(){
int N,l,c,Y,X,A,B,C,D,E,F;
while(scanf("%d",&N)==1){
    int M[N][N];
    for(l=0;l<N;l++){
        for(c=0;c<N;c++){
            M[l][c]=0;
        }
    }
    for(l=0;l<N;l++)
        M[l][l]=2;
    A=N-1;
    for(l=0,c=A;l<N;l++,c--)
        M[l][c]=3;
    Y=N/3;
    B=N-Y-Y;
    for(C=Y,E=1;E<=B;C++,E++){
        for(D=Y,F=1;F<=B;D++,F++){
            M[C][D]=1;
        }
    }
    if(N%2==1)
        X=N/2;
    else
        X=(N/2)-1;
    M[X][X]=4;
    for(l=0;l<N;l++){
        for(c=0;c<N;c++){
            printf("%d",M[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}
    return 0;
}
