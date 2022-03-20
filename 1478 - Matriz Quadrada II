#include <stdio.h>
 
int main() {
int N,l,c;
while(1){
    scanf("%d",&N);
    if(N==0)
        break;
    int M[N][N];
    for(l=0;l<N;l++){
        for(c=0;c<N;c++){
            if(c==l)
                M[l][c]=1;
            if(l<c)
                M[l][c]=c-l+1;
            if(l>c)
                M[l][c]=l-c+1;
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
