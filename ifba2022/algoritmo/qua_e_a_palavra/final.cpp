#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#define p 6
#define d 4
#define j 2


int cronometro(){
	int tempo;
	while(!kbhit){
		Sleep(1000);
		tempo++;
		if(tempo == 10){
			return 0;
		}
		return 1;
	}
}
void cadastrardicas(char dicas[p*d][100], int i){
	for (int k = i*d;k<(i+1)*d;k++){
	fflush(stdin);
	printf("Informe dica %d:",k+1);
	gets(dicas[k]);
        }
}
void cadastrarpalavras(char palavras[p][24], char dicas[p*d][100]){
	for(int i = 0; i < p; i++){
		fflush(stdin);
		printf("Informe a palavra %d: ",i+1);
		gets(palavras[i]);
		cadastrardicas(dicas,i);
	
	}
}

void cadastrarjogadores(char jogadores[2][15]){
		int o;
		for(o=0; o<j; o++){
			fflush(stdin);
			printf("Jogador %d: ",o+1);
			gets(jogadores[o]);
		}
	}
int menu(){
	int opcao;
	system("cls");
	printf("\n1 - Cadastrar Palavras e dicas\n2 - Cadastrar Jogadores\n3 - Jogar\n4 - Regras\n5 - Sair");
	scanf("%d",&opcao);
	return opcao;
}
int regras(){
	fflush(stdin);
	printf("Acertou a palavra de primeira 5 pontos\n - Precisou de uma dica a mais 4 pontos\n - Precisou de duas dicas a mais 3 pontos\n - Precisou de três dicas a mais 2 pontos\n");
	Sleep(10000);
	system("cls");                                          
}

void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
    Sleep(2000);
    system("cls");
}

int main(void){
	setlocale(LC_ALL,"portuguese");
	char palavras[6][24], dicas[p*d][100], jogadores[2][15];
	int opcao;
	do{
		opcao = menu();
		switch(opcao){
			case 1: cadastrarpalavras(palavras, dicas); break;
			case 2: cadastrarjogadores(jogadores); break;
			case 3: menu(); break;
			case 4: regras(); break;
			case 5: sair(); break;
		}
	}while(opcao != 5);
	
	return 0;
}
