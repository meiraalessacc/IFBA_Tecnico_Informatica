#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

void menu()
{
		int n1;
    printf("Qual a palavra?\n");
    printf("Deseja começar o jogo? Digite 1");
  	printf("Deseja sair do jogo? digite 2");
    	scanf("%d",n1);
    	if(n1 > 1){
 		sair();
 		} else {
 		regras();
 		}
}

void regras()
{
     printf("Bem vindo ao jogo!\n");
       printf("Essas sao as regras:/n1- No maximo 2 jogadores por partida./n2- Cada palavra vale 5 pontos./n3-Sao 5 dicas por palavra./n4- A cada dica pedida subtrai um ponto./n5-Tanto as palavras quanto as dicas sao sorteadas.");
       system("Pause");
       break;
}


void jogadores(int)
{
    printf("Quantas essoas irão jogar?");
    switch ( valor )
  {
    case 1 :
    printf ("1 jogador");
    break;
    
    case 2 :
    printf ("2 jogadores");
    
    break;
    default :
    printf ("Valor invalido!\n");
  }
void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
}
int cronometro(){
	int tempo;
	while(!kbhit){
		Sleep(1000);
		tempo++;
		if(tempo == 10){
			return0;
		}
		return 1;
	}
}
main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
}

