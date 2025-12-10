#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct agenda {
char nome [40], telefone [20], email [30];

};

int main ()
{
setlocale(LC_ALL, "Portuguese");
struct agenda dados [5];
int i, op, cont;

do {

printf ("\nDigite 1 para cadastrar novo cliente; \nDigite 2 para visualizar clientes; \nDigite 0 para encerrar:\n");
scanf ("%d", &op);
fflush (stdin);

switch (op)
{

case 0:
system ("cls");
printf ("Aplicação encerrada!\n");
break;

case 1:

if (cont<=5){
system ("cls");
printf ("Código: %d\n", cont);
printf ("Digite o nome:");
fgets (dados[cont].nome, 40, stdin);
fflush (stdin);
printf ("Digite o telefone:");
fgets (dados[cont].telefone, 20, stdin);
fflush (stdin);
printf ("Digite o e-mail:");
fgets (dados[cont].email, 30, stdin);
fflush (stdin);
printf("\n");
cont++;
}
else
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

printf ("Código: %d\n", i);
printf ("\nNome: %s", dados.nome);
printf ("\nTelefone: %s", dados.telefone);
printf ("\nE-mail: %s", dados.email);
printf ("\n______________________________________");
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
