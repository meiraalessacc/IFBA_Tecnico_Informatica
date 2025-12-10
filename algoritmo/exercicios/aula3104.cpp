#include <stdio.h>
#include <string.h>
main(){
	char frase[200];
	int quantidade=0;
	printf("Digite uma frase qualquer:");
	gets(frase);
	for(int i=0; i < strlen(frase);i++){
	if(frase[i]== 'a' || frase[i]=='A'){
		quantidade++;
		}
	}
	printf("\nEncontrei %d letras a",quantidade);
}
