#include <stdio.h>
 
int main() {
int N,l,c;
while(scanf("%d",&N)==1){
    int M[N][N];
    for(l=0;l<N;l++){
        for(c=0;c<N;c++){
            M[l][c]=3;
            if(l==c)
                M[l][c]=1;
            if(c==N-l-1)
            	M[l][c]=2;
            printf("%d",M[l][c]);
        }
        printf("\n");
    }
}
    return 0;
}
