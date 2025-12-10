#include<stdio.h>
#include<stdlib.h>

#define max 100

typedef struct {
	int dia;
	int mes;
	int ano;
}data;

typedef struct {
	char nome[30];
	char telefone[15];//só deixa a data e o nome,chamar de pessoa//
	char email[20];
	data nacs;
}agenda;

int menu(){
	int opcao;
	system("cls");
	printf("\n\nMenu\n");
	printf("1-Cadastrar\n2-Mostrar\n3-Sair\nEscolha");
	scanf("%d",&opcao);
	return opcao;
}
void mostrar(agenda a[max],int quant){
	system("cls");
	printf("\n\nAgenda\n\n");
	for(int i=0;i<quant;i++){
		printf("\nNome:%s\nTelefone: %s      E-mail: %s",a[i].telefone,a[i].email);
		printf("\nData de Nascimento:%d",a[i].nacs.dia,a[i].nacs.ano);
}
system("pause");
}

agenda cadastrar(){
	agenda b;
	system("cls");
	printf("Informe os dados da pessoa");
	printf("\nNome:");
	fflush(stdin);
	gets(b.nome);
	printf("\nTelefone: ");
	fflush(stdin);
	gets(b.telefone);
	printf("\nE-mail: ");
	fflush(stdin);
	gets(b.email);
	printf("\nData de Nascimento: ");				//como a data está fragmentada pode ler um de cada vez ou tudo junto//
	scanf("%d %d %d",&b.nacs.dia,&b.nacs.mes,&b.nacs.ano);
	return b;
}

main(){
	agenda a [max];
	int opcao,quant =0;//aqui vai ser pessoa uma pessoa não precisa ser vetor,mais de uma pessoa utilixar vetor(evite colocar numeros no vetor,utilize o define//
	do{
		opcao=menu();
		switch(opcao){
			case 1:a[quant]=cadastrar();quant++;break;
			case 2:mostrar(a,quant);break;
			case 3:printf("Bye,bye");break;
			default:printf("opção invalida");
		}
	}while(opcao !=3);
}

//criar função para capturar data do sistema, tem no class e fazer a conta, subtrai um do outro,ano-ano=guardar a informação,mes atual é maior que o mes que a messoa nasceu?se sim só subtrai e guarda, se não diminua um ano//
