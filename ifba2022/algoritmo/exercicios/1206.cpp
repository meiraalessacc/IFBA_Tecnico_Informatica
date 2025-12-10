#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int senha[200], i=0, opcao, j=0;
	do{
		printf("\n\n Menu:\n\n1-Gerar senha\n2-Chamar senha\n3-Sair");
		scanf("%d",&opcao);
		switch(opcao){
		case 1:senha[i]=i+1;
		printf("Foi gerada a senha %d",senha[i]);
		Sleep(500);
			i++;break;
