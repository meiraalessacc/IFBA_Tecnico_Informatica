#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define max 100

typedef struct{
	char nome[35];
	int matricula[15];
	char curso[15];
	char turma [5];
	char turno [15];
	char email[35];
}pessoa;
int menu(){
	int opcao;
	system("cls");
	printf("\n\n1 - Cadastrar\n2 - Consultar por matricula\n3 - Consultar por curso\n4 - Consultar por turma\n5 - Consultar por turno\n");
	printf("\n6 - Sair");
	scanf("%d",&opcao);
	return opcao;
}
void cadastrar (pessoa p[max],int quant){
	pessoa estud ;
	printf("Informe o nome: ");
	fflush(stdin);
	gets(estud.nome);
	printf("Informe a matricula: ");
	scanf("%d",&estud.matricula);
	printf("Informe o curso: ");
	fflush(stdin);
	gets(estud.curso);
	printf("Informe o turma: ");
	fflush(stdin);
	gets(estud.turma);
	printf("Informe o turno: ");
	fflush(stdin);
	gets(estud.turno);
	printf("Informe o email: ");
	fflush(stdin);
	gets(estud.email);
	p[quant]=estud;
}

}
void consulta_curso(){
	
}
void consulta_turma(){
	
}
void consultar_turno(){

}
main(){
	pessoa p[max];
	int opcao, quant=0;
	do{
		opcao=menu();
		switch(opcao){
			case 1:cadastrar(p,quant);quant ++;break;
			case 2:consulta_matricula(pessoa,quant);break;
			case 3:consulta_curso();break;
			case 4:consulta_turma();break;
			case 5:consultar_turno();break;
			default:("Opcao invalida");
		}
	}while(opcao !=6);
}
