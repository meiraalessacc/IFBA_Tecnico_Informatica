#include <stdio.h>
#include <tdlib.h>
##include <locale.h>
#include < string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	Char nome[60];
	float nota=0 , media=6;
	for(int i=0; i<10;i++){
		printf("Informe seu nome %s",i++);
		gets(nome);
	}
	system("PAUSE");
}

