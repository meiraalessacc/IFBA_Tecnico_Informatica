#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
	float a,b,c, delta,x1,x2;
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	printf("Digite o valor de b:  ");
	scanf("%f",&b);
	printf("Digite o valor de c: ");
	scanf("%f",&c);
		if ( a !=0) {
			delta = (b*b) - 4*a*c;
			if (delta == 0) {
				x1 = (-b + sqrt (delta))/ (2*a);
				printf("Delta igual a 0\n");
				printf("x1 e x2=%.2f",x1);
			}else{ 
			if (delta>0) { 
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Delta maior que 0\n");
			printf("x1 = %.2f\n", x1);
			printf("x2 = %.2f\n", x2);
			} else {
				printf("Deltar menor que 0\n");
				printf("Nao existe raiz real");
				
			}
			}
		}
}
