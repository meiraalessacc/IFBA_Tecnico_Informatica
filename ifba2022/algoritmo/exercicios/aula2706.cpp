#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define max 30 //trabalho palavra: constante chamada max de valor 6 //
int ler (){
	int num;
	printf("Informe um numero entre 1 e %d:",max);
	scanf("%d",&num);
	return num;
}
void mostrar(int num){
	for(int i=0;1<= num;i++){
		system ("cls");
		printf("Numero %d",i);
		Sleep(1000);
	}
	
}
main(){
 int num;
 num=ler();
 mostrar(num);
}
