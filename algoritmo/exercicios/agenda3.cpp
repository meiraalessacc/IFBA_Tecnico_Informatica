#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

	struct  endereco{
		char logradouro[35];
		int numero;
		char bairro [15];
		char cidade[15];
		char cep[9];
		char uf[3];
		
	};
struct agenda {
char nome [30];
char telefone [15];
struct endereco end;

};
int main ()
{
setlocale(LC_ALL, "Portuguese");
struct agenda [5];
int i, op, cont;
do {

printf ("\nDigite 1 para cadastrar novo cliente;  \nDigite 0 para encerrar:\n");
scanf ("%d", &op);
fflush (stdin);

switch (op)
{

case 0:
system ("cls");
printf ("Fim");
break;
case 1:

if (cont<=5){
system ("cls");
printf ("Digite o nome:");
(agenda[cont].nome,30, stdin);
fflush (stdin);
printf ("Digite o telefone:");
gets (dados[cont].telefone, 15, stdin);
fflush (stdin);
printf ("Digite o endereco:");
fgets (dados[cont].email, 30, stdin);
fflush (stdin);
printf("\n");
cont++;
}
else
printf ("*****AGENDA LOTADA!*****\n");

break;

