#include <stdio.h>                                                                         //introdução inicio 
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
main(){
	// Acento em UTF-8
	setlocale(LC_ALL, "Portuguese");
	system("color 0b");//-----------------cor de fundo e letra---------
	//Menu
 	char op;
			 do{
	 int escolha;
 		printf("Qual função você deseja realizar?\n\nDigite:\n[1]>> 1º Grau\n[2]>> 2º Grau\n[0]>> Sair\n");
 		scanf("%d", &escolha);
 		system("cls");
 	switch(escolha){                                                                        //introdução final
 		case 1:                                                                             // case 1 inicio
		 float A, B, C, X;
		printf("Digite o valor de a");
		scanf("%f",&A);
		printf("Digite o valor de b");
		scanf("%f",&B);
		printf("Digite o valor de c");
		scanf("%f",&C);
		X = (C - B) / A;
		printf(" X = %.1f",X);
		 ;break;                                                                          //case 1 final
		case 2:                                                                           //case 2 inicio
		float a ,b , c, delta, x1, x2, r, y, x;
		printf("Digite o valor de a");
		scanf("%f",&a);
		printf("Digite o valor de b");
		scanf("%f",&b);
		printf("Digite o valor de c");
		scanf("%f",&c);
		printf("Você deseja saber o valor de:\n>>[1]X \n>>[2]Y\n\n");
		scanf("%f", &r);
		if(r == 1){
		delta = b*b - 4*a*c;
 		x1 = (-b + sqrt(delta)) / (2*a);
		 x2 = (-b - sqrt(delta)) / (2*a);
 		if(delta < 0) {
 		printf("A função não possui raizes reais.");
 		} else {
 		printf("O valor de x1: %.2f\n", x1);
 		printf("O valor de x2: %.2f", x2);
 		}                                                                                  //final//
		 }
		 if(r == 2){
 		printf("Informe o valor de x:");
		scanf("%f", &x);
		y = a*pow(x , 2) + b*x + c;
		printf(" \nO valor de y é: y = %.1f\n",y);
 				}
	 		Sleep(5000);
		system("cls");
	 			;break;
		 }
	}while (op != '0');

    return 0;}










