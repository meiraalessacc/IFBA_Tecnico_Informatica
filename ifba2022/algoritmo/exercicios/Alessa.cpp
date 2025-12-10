#include <stdio.h>
#include <math.h>
main(){
	float raio,altura,area,valor,litros;
	int latas;
	printf("Informe o raio e a altura: ");
	scanf("%f %f",&raio, &altura);
	area=2*3.14*pow(raio,2) + 2*3.14*raio*altura;
	litros=area/3;
	latas=ceil(litros/5);
	valor=latas*20;
	printf("Quantidade de latas:%d",latas);
	printf("\nValor total=%.2f",valor);
}
