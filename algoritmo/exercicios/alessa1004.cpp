#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	float d,c,a,r;
	printf ("Informe raio");
	scanf ( "%f",&r);
	d= 2*r;
	c=2*3.14*r;
	a= 3.14*(pow(r,2));
	printf (" diametro= %.1f",d);
	printf(" comprimento= %.1f",c);
	printf(" area= %.1f",a);
	
	system("PAUSE");
}

