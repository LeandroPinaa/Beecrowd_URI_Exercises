#include <stdio.h>

int main(void) {
double A,B,C,Aux;
scanf("%lf%lf%lf",&A,&B,&C);
if(A<B) { Aux = A;   A = B;   B = Aux; }
 if(A<C) { Aux = A;   A = C;   C = Aux; }
 if(B<C) { Aux = B;   B = C;   C = Aux; }
if(A>=B+C){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
}
if((A*A)==((B*B)+(C*C))){
    printf("TRIANGULO RETANGULO\n");
}
if((A*A)>((B*B)+(C*C))){
    printf("TRIANGULO OBTUSANGULO\n");
}
if((A*A)<((B*B)+(C*C))){
    printf("TRIANGULO ACUTANGULO\n");
}
if(A==B&&B==C){
	printf("TRIANGULO EQUILATERO\n");
	return 0;
}
if(A==B||B==C||C==A){
	printf("TRIANGULO ISOSCELES\n");
}
	return 0;
}
