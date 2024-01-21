#include <stdio.h>
 
int main() {
int a,h,m,s;
scanf("%d",&a);
h = a/3600;
a -= h*3600;
m = a/60;
a -= m*60;
printf("%d:%d:%d\n",h,m,a);
    return 0;
}
