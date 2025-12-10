/*Construa um programa que calcule o somatório dos n primeiros números da sequencia de Fibonacci.
Crie uma função chamada soma, que receba o valor de n como parâmetro, e retorne a soma dos números.
(Sequencia de Fibonacci: 1 1 2 3 5 8 … )*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

void soma(){
	int a, b, soma, n, i;
	a= 0;
	b= 1;
	printf("Insira um número: ");
	scanf("%d", &n);
	printf("\nA série de Fibonacci:\n\n");
	printf("%d\n", a, b);
	for(i= 0; i< n; i++){
		soma= a+ b;
		a= b;
		b= soma;
		printf("%d\n", soma);
	}
}

main(){
	setlocale(LC_ALL,"portuguese");
	soma();
}
