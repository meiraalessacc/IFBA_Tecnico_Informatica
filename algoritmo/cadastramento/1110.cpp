//Alunas:Alessa Vitória Meira da Cruz e Ingrid Vitória Queiroz Ferreira //

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
typedef struct {
	char logradouro[35];
	int numero; //cadastrar endereço//
	char bairro[20];
	char cidade[20];
}endereco;

typedef struct{
	int cod;
	char nome[35];
	int telefone; //cadastrar cliente//
	char email[20];
	endereco p;
}pessoa;
int submenu(int opcao_p){ // mostra as opções de busca//
	system("cls");
	printf("\n\n       --------------------- BUSCAR POR --------------------- \n\n");
	printf("                         1-Nome do cliente:\n                         2- Numero da ordem de servico:\n                         3-Voltar ao menu:\n");
	scanf("%d",&opcao_p);
	return opcao_p;
}
int menu(int opcao){ // mostra as opções//
	system("cls");
	printf("\n\n       ---------------------------- MENU ----------------------------\n\n");
	printf("\n\n                               1-Cadastrar:\n                               2-Listar:\n                               3-Buscar:");
	printf("\n                               4-Atualizar:\n                               5-Sair:\n\n                        ");
	scanf("%d",&opcao);
	return opcao;
}

int buscar_os_nome(){
	int cont = 0, achei = 0;
	FILE *arq;
	pessoa p;
	char nome[30];
	printf("\n       --------------------- INFORME O NOME ------------------\n\n");  // busca o cliente pelo nome//
	fflush(stdin);
	gets(nome);
	arq = fopen("exemplo.bin","rb");
	while(fread(&p,sizeof(pessoa),1,arq) != 0){
		cont++;
		if(strcmp(nome,p.nome) == 0){
			achei = 1;
			printf("\n       --------------------- DADOS PESSOAIS -------------------\n\n");
			printf("\n          Codigo: %d  ",p.cod);
			printf("\n          Nome: %s  ",p.nome);
			printf("\n          Telefone: %d  ",p.telefone);
			printf("\n          Email: %s ",p.email);
			printf("\n\n        --------------------- ENDERECO -----------------------\n");
			printf("\n          Logradouro: %s ",p.p.logradouro);
			printf("\n          Numero: %d ",p.p.numero);
			printf("\n          Bairro: %s ",p.p.bairro);
			printf("\n          Cidade: %s ",p.p.cidade);
			system("pause");
			break;
		}
	}
	if(achei == 0){
		printf("O nome nao foi encontrado\n");
		system("pause");
	}
	fclose(arq);
	return cont;
}

int buscar_os_(){
	int cont = 0, achei = 0;
	FILE *arq;
	pessoa p;
	int cod;
	printf("       -------------------- INFORME O CODIGO -----------------\n\n");  // busca o cliente pelo numero de ordem de serviço//
	scanf("%d",&cod);
	arq = fopen("exemplo.bin","rb");
	while(fread(&p,sizeof(pessoa),1,arq) != 0){
		cont++;
		if(cod == p.cod){
			achei = 1;
			printf("\n       --------------------- DADOS PESSOAIS -------------------\n\n");
			printf("\n          Codigo: %d  ",p.cod);
			printf("\n          Nome: %s  ",p.nome);
			printf("\n          Telefone: %d  ",p.telefone);
			printf("\n          Email: %s ",p.email);
			printf("\n\n        --------------------- ENDERECO -----------------------\n");
			printf("\n          Logradouro: %s ",p.p.logradouro);
			printf("\n          Numero: %d ",p.p.numero);
			printf("\n          Bairro: %s ",p.p.bairro);
			printf("\n          Cidade: %s ",p.p.cidade);
			system("pause");
			break;
		}
	}
	if(achei == 0){
		printf("O nome nao foi encontrado\n");
		system("pause");
	}
	fclose(arq);
	return cont;
}

void listar(){
	FILE *arq;
	pessoa p;
	arq = fopen("exemplo.bin","rb");
	system("cls");
	while(fread(&p,sizeof(pessoa),1,arq) != 0){
		printf(" \n      --------------------- CLIENTES CADASTRADOS ---------------------\n\n"); // lista todos os clientes já cadastrados e seus dados//
		printf("\n  Codigo: %d   Nome: %s   Telefone: %d \n",p.cod,p.nome,p.telefone);
		printf("\n  E-mail: %s\n",p.email);
		printf("\n  Logradouro: %s   Numero: %d   Bairro: %s   Cidade: %s\n\n",p.p.logradouro,p.p.numero,p.p.bairro,p.p.cidade);
	}
	system("pause");
	fclose(arq);
}

int gerarcodigo(){
	FILE *arq;
	pessoa p;
	if((arq = fopen("exemplo.bin","rb")) != NULL){  //gera um codigo novo automaticamente para cada cliente//
		fseek(arq,-1*sizeof(pessoa),SEEK_END);
		fread(&p,sizeof(pessoa),1,arq);
		fclose(arq);
		return p.cod+1;
	}else{
		return 1;
	}	
}

void cadastrar(){
	FILE *arq;
	pessoa p;
	p.cod = gerarcodigo();
	printf("\n       --------------------- CADASTRE SEUS DADOS ---------------------\n\n");  //Cadastra os dados do cliente//
	printf("                    Informe o nome: ");
	fflush(stdin);
	gets(p.nome);
	printf("                    Informe o telefone: ");
	scanf("%d",&p.telefone);
	printf("                    Informe o e-mail: ");
	fflush(stdin);
	gets(p.email);
	printf("                    Informe o logradouro: ");
	fflush(stdin);
	gets(p.p.logradouro);
	printf("                    Informe o numero da casa: ");
	scanf("%d",&p.p.numero);
	printf("                    Informe o bairro: ");
	fflush(stdin);
	gets(p.p.bairro);
	printf("                    Informe a cidade: ");
	fflush(stdin);
	gets(p.p.cidade);
	arq = fopen("exemplo.bin","ab");
	fwrite(&p,sizeof(pessoa),1,arq);
	fclose(arq);
}

void atualizar(int id){
	FILE *arq;
	pessoa p;
	id = buscar_os_nome();
	arq = fopen("exemplo.bin","rb+");
	id--;
	fseek(arq,id*sizeof(pessoa),SEEK_SET);//SEEK_END  SEEK_CUR
	fread(&p,sizeof(pessoa),1,arq);
	printf("\n       --------------------- ATUALIZE SEUS DADOS ---------------------\n\n"); //Atualiza os dados já cadastrados//
	printf("          Informe o nome: ");
	fflush(stdin);
	gets(p.nome);
	printf("          Informe o telefone: ");
	scanf("%d",&p.telefone);
	printf("          Informe o e-mail: ");
	fflush(stdin);
	gets(p.email);
	printf("          Informe o logradouro: ");
	fflush(stdin);
	gets(p.p.logradouro);
	printf("          Informe o numero da casa: ");
	scanf("%d",&p.p.numero);
	printf("          Informe o bairro: ");
	fflush(stdin);
	gets(p.p.bairro);
	printf("          Informe a cidade: ");
	fflush(stdin);
	gets(p.p.cidade);
	fseek(arq,id*sizeof(pessoa),SEEK_SET);//SEEK_END  SEEK_CUR
	fwrite(&p,sizeof(pessoa),1,arq);
	fclose(arq);
}

main(){//bloco principal//
	int opcao, id = 0;
	int opcao_sub;
	
	do{ // opções do menu//
		opcao = menu(opcao);
		switch(opcao){
			case 1: cadastrar(); break;
			case 2: listar(); break;
			case 3: opcao_sub = submenu(opcao_sub); 
					switch(opcao_sub){// opções do submenu//
						case 1: id =  buscar_os_nome(); break;
						case 2: id = buscar_os_(); break;
						case 3:break;
					}
					break;
			case 4: atualizar(id); break;
			case 5:printf("\n         xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
			printf("                   xxxxxxxxxxxxxxxxxxxxxxxx   * TCHAU ! *   xxxxxxxxxxxxxxxxxxxxxx");
			printf("\n         xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
			break;
			default: printf("Opcao invalida"); system("pause");
		}
	}while(opcao != 5);
	

}








