#include <stdio.h>
 
int main() {
int N,l,c,X;
while(1){
    scanf("%d",&N);
    if(N==0)
        break;
    int M[N][N];
    for(l=0,X=1;l<N;l++,X++){
        for(c=0;c<N;c++){
            M[l][c]=X;
            if(c<M[l][c])
                M[l][c]=c+1;
            if(N-l<M[l][c])
                M[l][c]=N-l;
            if(N-c<M[l][c])
                M[l][c]=N-c;
            printf("%3d",M[l][c]);
            if(c<N-1)
                printf(" ");
            else
                printf("\n");
        }
    }
    printf("\n");
}
    return 0;
}
