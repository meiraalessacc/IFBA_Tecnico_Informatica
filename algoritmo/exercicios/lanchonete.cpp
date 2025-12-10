#include <stdio.h>
#include<stdlib.h>
#include <Windows.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int senha[50], i=0, opcao, j=0;
	do{
		printf("\n\nMENU\n1-FAZER PEDIDO:\n2-Chamar Clinte\n3-SAIR\n");
		scanf("%d",&opcao);	
			switch(opcao){
		case 1:senha[i]=i+1;
		printf("\nA senha gerada foi %d",senha[i]);
			Sleep(1000);
			i++;
		case 2:
		printf("Pedido pronto :%d",senha[j]);
			Sleep(1000);
			j++;break;
		case 3: printf("\nTchau!");break;
		default:printf("\nopcao invalida");}
	}while(opcao!=3);	
}
