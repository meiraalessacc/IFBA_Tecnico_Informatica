#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define max 100

typedef struct{
	char nome[20];
	char codigo [10];
	float valor;
}produto;

int menu(){
	int opcao;
	system("cls");
	printf("\n\n1  - Cadastrar\n2 - Imprimir ");
	printf("\n3 - Consultar Preco\n4 - Sair");
	scanf("%d",&opcao);
	return opcao;
}

void cadastrar (produto p[max],int quant){
	produto prod ;
	printf("Informe o nome do produto: ");
	fflush(stdin);
	gets(prod.nome);
	printf("Informe o codigo do produto: ");
	fflush(stdin);
	gets(prod.codigo);
	printf("Informe o valor do produto : ");
	scanf("%f",&prod.valor);
	p[quant]=prod;
}

void imprimir(produto p[max], int quant){
	system("cls");
	printf("\n\n LISTA DE PRODUTOS\n\n");
	for(int i=0; i<quant; i++){
		printf("\n%s		%s",p[i].codigo,p[i].nome);
	}
	system("PAUSE");
}
void consultar(produto p[max],int quant){
	char cod[10];
	int achei=0;
	printf("Qual o codigo do produto?");
	fflush(stdin);
	gets(cod);
	for( int i=0; i<quant;i++){
		if(strcmp(cod,p[i].codigo)==0){
			achei =1;
			printf("\n Codigo		Produto		Valor  ");
			printf("\n%s		%s		%.2f ",p[i].codigo,p[i].nome,p[i].valor);
		}
	}if(achei==0){
		printf("\n Produto não encontrado");
	}
	system("pause");
}
main(){
	produto p[max];
	int opcao, quant=0;
	do{
		opcao=menu();
		switch(opcao){
			case 1:cadastrar(p,quant);quant ++;break;
			case 2:imprimir(p,quant);break;
			case 3:consultar(p,quant);break;
			case 4:break;
			default:("Opcao invalida");
		}
	}while(opcao !=4);
}
	

