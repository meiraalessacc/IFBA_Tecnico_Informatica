#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<windows.h>

	struct  endereco{
		char logradouro[35];
		int numero;
		char bairro [15];
		char cidade[15];
		char cep[9];
		char uf[3];
		char email[30];
		
	};
	struct agenda{
		char nome[30];
		char telefone[9];
		char data_nasc[11];
		struct endereco end;
		
	};

main(){
	setlocale(LC_ALL, "Portuguese");
	struct agenda dados [5];
	int i, op, cont;
do {

printf ("\nDigite 1 para cadastrar novo cliente; \nDigite 2 para visualizar clientes;\nDigite 0 para encerrar:\n");
scanf ("%d", &op);
fflush (stdin);
system("CLS");

switch (op)
{

case 0:
system ("cls");
printf ("\n                                     TCHAU!                \n…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*…*..\n");
Sleep(1000);
break;

case 1:
if (cont<=5){
system ("cls");
printf ("Digite o seu nome:\n");
printf ("Digite sua data de nascimento:\n");
printf ("Digite o seu telefone:\n");
printf ("Digite o seu email:\n");
printf ("Digite o seu endereço:\n");

fflush (stdin);
printf("\n");
cont++;}else
printf ("*****AGENDA LOTADA!*****\n");
break;

case 2:

system ("cls");
if (cont==1) {
{printf ("*****AGENDA VAZIA!*****\n");}
fflush (stdin);
}
else {
for (i=1; i<=5; i++);
printf ("\n");
}
break;

default:
printf ("Erro: opção inválida!");
}
}

while (op!=0);
return(0);
}

