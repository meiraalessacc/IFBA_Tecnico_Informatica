#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define max 100

typedef struct{
	char nome[20];
	char sexo[15];
	char cpf[11];
	float altura [5];
	float peso [5];
}pessoa;
int menu(){
	int opcao;
	system("cls");
	printf("\n\n1  - Cadastrar\n 2- Consultar por CPF\n3 - Imprimir IMC ");
	printf("\n4 - Sair");
	scanf("%d",&opcao);
	return opcao;
}
void cadastrar (pessoa p[max],int quant){
	pessoa prod ;
	printf("Informe o nome: ");
	fflush(stdin);
	gets(prod.nome);
	printf("Informe o sexo: ");
	fflush(stdin);
	gets(prod.sexo);
	printf("Informe o CPF: ");
	fflush(stdin);
	gets(prod.cpf);
	printf("Informe a altura: ");
	scanf("%f",&prod.altura);
	printf("Informe o peso: ");
	scanf("%f",&prod.peso);
	p[quant]=prod;
}
void consultar(pessoa p[max],int quant){//erro//
	char cod[10];
	int achei=0;
	printf("Qual o numero do CPF?");
	fflush(stdin);
	gets(cod);
	for( int i=0; i<quant;i++){
		if(strcmp(cod,p[i].codigo)==0){
			achei =1;
			printf("\n Nome		Sexo		CPF		Altura		Peso");
			printf("\n%s		%s		%s		%.2f		%.2f ",p[i].nome,p[i].sexo,p[i].cpf,p[i].altura,p[i].peso);
		}
	}if(achei==0){
		printf("\n Produto não encontrado");
	}
	system("pause");
}
main(){
	pessoa p[max];
	int opcao, quant=0;
	do{
		opcao=menu();
		switch(opcao){
			case 1:cadastrar(p,quant);quant ++;break;
			case 4:break;
			default:("Opcao invalida");
		}
	}while(opcao !=4);
}
