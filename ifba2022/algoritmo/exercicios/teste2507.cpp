#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>

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
void sair()
{
    printf("Ja vai??? Nao! Nao! Espere! Naa...\n");
    Sleep(2000);
    system("cls");
}
void cadastrarjogadores(char jogadores[2][15]){
	int o;
	for(o=0;o<j;o++){
    	fflush(stdin);
		printf("\nInforme os jogadores %d: ", o+1);
    	gets(jogadores[o]);
    }

void cadastrardicas(char dicas[p*d][100], int i){
	int count;
	for (count=i*d;count<(i+1)*d;count++){
			fflush(stdin);
        	printf ("\nDigite a dica %d da palavra %d: ",count+1,i+1);
        	gets(dicas[count]);
        }
}//jogadores é igual menos pla utima linha//
    
void cadastrarpalavras(char palavras[p][20], char dicas[p*d][100]){
	int i;
	for(i=0;i<p;i++){
    	fflush(stdin);
		printf("\nInforme uma palavra %d: ", i+1);
    	gets(palavras[i]);
    	cadastrardicas(dicas,i);
	}
}

menuprincipal(){

	int opcao;
	system("cls");
	printf("\n Cadastrar Palavras e dicas\n2- Cadastrar Jogadores\n3-Jogar\n4-Regas");
	scanf("%d",&opcao);
	return opcao;}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char palavras[p][20], dicas[p*d][100], jogador[2][15];
	int opcao;
	do{
		opcao=menuprincipal();
	switch(opcao){
		case 1: cadastrarpalavras(palavras,dicas);break;
		case 2: cadastrarjogadores(jogadores);break;
	}
	while(opca !=5);
	}
	return 0;
}
	
}

