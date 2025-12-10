#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <windows.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int senha[200], i = 0 , opcao, j =0;
	do{
		 system("cls");
		 printf("\n\n MENU \n1- Gerar Senha\n2- Chamar Senha\n3- Sair");
		 scanf("%d",&opcao);
		 	switch(opcao){
			 
		case 1: senha[i] = i+1;
		printf("A senha Gerada foi %d", senha[i]);
			Sleep(2000);
					i++;break;
			case 2: system( "cls");
			printf("SENHA CHAMADA : %d", senha[j]);
				Sleep(2000);
				j++; break;
				system("PAUSE");
			case 3: printf("\n Tchau"); break;
			default: printf(" \n opçao invalida");
		}
			
		
			
		}while(opcao != 3 );

	}

		
