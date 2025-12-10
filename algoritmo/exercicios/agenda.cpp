#include<stdio.h>
#include<stdlib.h>

struct endereco{
		char logradouro[20];
		int numero;
		char bairro[15];
		char cidade[15];
	};
	struct ficha_rh{
		char matricula[10];
		char nome[30];
		char cargo[20];
		float salario;
		char data_nasc[11];
		char data_admicao[11];
		char data_desligamento[11];
		struct endereco end;
	};

main(){
 	struct ficha_rh func;
 	printf("Informe o nome do funcionario:");
 	gests(func,nome);
 		printf("Informe a matricula:");
 	gests(func,matricula);
	printf("Informe o endereço\n:");
 	printf("Rua:");
 	gets(fun,end,logradouro)
}
