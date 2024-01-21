#include <stdio.h>
int dg(int X){
int a=X,b=0;
while(a){
    a/=10;
    b++;
}
	return b;
}
int main(){
int L=0,C=0,N,a,b,c=1,x,y=0,I,d,e=0,f,g,h;
while(1){
    scanf("%d",&N);
    if(N==0)
        break;
    int M[N][N];
    I=N-1;
    for(x=0,c=1,y=0;x<N;x++){
        for(a=y,b=0;a>=0;a--,b++)
            M[a][b]=c;
        y++;
        c*=2;
    }
    for(x=1,y=1;x<N;x++){
        for(a=I,b=y;b<=I;a--,b++)
            M[a][b]=c;
        y++;
        c*=2;
    }
    d=dg(M[I][I]);
    for(L=0;L<N;L++){
        for(C=0;C<N;C++){
            if(C==0){
                h=M[L][C];
                e=dg(h);
                g=d-e;
                for(f=1;f<=g;f++)
                    printf(" ");
                printf("%d",M[L][C]);
            }
            else{
                h=M[L][C];
                e=dg(h);
                g=d-e;
                for(f=1;f<=g;f++)
                    printf(" ");
                printf(" %d",M[L][C]);
            }
        }
        printf("\n");
    }
    printf("\n");
}
    return 0;
}
