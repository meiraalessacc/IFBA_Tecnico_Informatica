#include <stdio.h>
#include <iostream>
#include<locale.h>
#include<stdlib.h>
int abrir_arquivo(char nome[50],char modo[3],FILE*arq){
	arq= fopen(nome,modo);
	if(arq == NULL){//arq=null significa que essa abertura não funcionou//
		return 0;
	}else{
		return 1;	
	}
}
void ler_texto(	char texto[250]){
	printf("Informe o texto a ser gravado :");
	fflush(stdin);
	gets(texto);
}
 void gravar_texto(FILE*arq, char texto[250]){
 	char nome[50];
 	printf("Onde voce gostaria de gravar o texto?");
 	fflush(stdin);
 	gets(nome);
 	abrir_arquivo(nome,"wt",arq);
 	fprintf(arq,"%s",texto);//fprintf escreve o texto no arquivo//  //ou fputs (ler string) e fputc(ler caracter)// 
 	fclose(arq);
 	
 }
main(){
	FILE*arq;
	char nome[50], texto[250];
	ler_texto(texto);
	gravar_texto(arq,texto);
	
}

