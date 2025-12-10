#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include<string.h>

#define p 6
#define d 4
#define quant 5
#define q 24

int sorteardica(){
	int num; 
	num = rand()%q;
	return num;

}
int sortear(){
	int num; 
	num = rand()%quant;
	return num;}

int acertos=0,erros;

if(strcmp(resposta,palavras[i])==0){
	printf("parabens, voce acertou!");
	acertos++;
}else{
	printf("voce errou, tente outra vez!");
	erros++;
}
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
	int i;
	for(i=0;i<p;i++){
    	fflush(stdin);
		printf("\nInforme os jogadores %d: ", i+1);
    	gets(jogadores[i]);
    }
}
void cadastrardicas(char dicas[p*d][100], int i){
	int count;
	for (count=i*d;count<(i+1)*d;count++){
			fflush(stdin);
        	printf ("\nDigite a dica %d da palavra %d: ",count+1,i+1);
        	gets(dicas[count]);
        	 num = sorteardica();
	printf(" a dica sorteada foi %s",num);

        }
}//jogadores é igual menos pla utima linha//
    
void cadastrarpalavras(char palavras[p][20], char dicas[p*d][100]){
	int i;
	for(i=0;i<p;i++){
    	fflush(stdin);
		printf("\nInforme uma palavra %d: ", i+1);
    	gets(palavras[i]);
    	cadastrardicas(dicas,i);
    	 num = sortear();
	printf(" a palavra sorteada foi %s",num);
	}
}

menuprincipal(){

	int opcao;
	system("cls");
	printf("\n Cadastrar Palavras e dicas\n2- Cadastrar Jogadores\n3-Jogar\n4-Regas");
	scanf("%d",&opcao);
	return opcao;}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	char palavra[p][20], dicas[p*d][100], jogador[2][15], resposta,palavras;
	int opcao, num;
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

