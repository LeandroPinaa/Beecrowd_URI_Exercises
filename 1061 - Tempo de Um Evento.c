#include <stdio.h>
 
int main() {
int dia1,hora1,minuto1,segundo1,dia2,hora2,minuto2,segundo2;
scanf("Dia %d",&dia1);
scanf("%d : %d : %d\n",&hora1,&minuto1,&segundo1);
scanf("Dia %d",&dia2);
scanf("%d : %d : %d",&hora2,&minuto2,&segundo2);
segundo1 = segundo2-segundo1;
minuto1 = minuto2-minuto1;
hora1 = hora2-hora1;
dia1 = dia2-dia1;
if(segundo1<0){
 segundo1+=60;
 minuto1--;
}
if(minuto1<0){
 minuto1+=60;
 hora1--;
}
if(hora1<0){
 hora1+=24;
 dia1--;
}
printf("%d dia(s)\n", dia1);
printf("%d hora(s)\n", hora1);
printf("%d minuto(s)\n", minuto1);
printf("%d segundo(s)\n", segundo1);
return 0;
}
