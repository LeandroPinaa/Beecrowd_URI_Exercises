#include <stdio.h>
 
int main(void) {
int v[10],a;
for(a=0;a<10;a++)
	scanf("%d",&v[a]);
for(a=0;a<10;a++)
	if(v[a]<=0)
		v[a]=1;
for(a=0;a<10;a++)
	printf("X[%d] = %d\n",a,v[a]);
	return 0;
}
