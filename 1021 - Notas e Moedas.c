#include <stdio.h>
 
int main() {
double X;
int Y,Z;
scanf("%lf",&X);
Y=X;
Z=X*100;
printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",Y/100);
Y=Y%100;
printf("%d nota(s) de R$ 50.00\n",Y/50);
Y=Y%50;
printf("%d nota(s) de R$ 20.00\n",Y/20);
Y=Y%20;
printf("%d nota(s) de R$ 10.00\n",Y/10);
Y=Y%10;
printf("%d nota(s) de R$ 5.00\n",Y/5);
Y=Y%5;
printf("%d nota(s) de R$ 2.00\n",Y/2);
Y=Y%2;
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",Y/1);
Z=Z%100;
printf("%d moeda(s) de R$ 0.50\n",Z/50);
Z=Z%50;
printf("%d moeda(s) de R$ 0.25\n",Z/25);
Z=Z%25;
printf("%d moeda(s) de R$ 0.10\n",Z/10);
Z=Z%10;
printf("%d moeda(s) de R$ 0.05\n",Z/5);
Z=Z%5;
printf("%d moeda(s) de R$ 0.01\n",Z/1);
    return 0;
}
