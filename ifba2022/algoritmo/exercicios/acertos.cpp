#include<string.h>

int acertos=0,erros;

if(strcmp(resposta,palavra[i])==0){
	printf("parabens, voce acertou!");
	acertos++;
}else{
	printf("voce errou, tente outra vez!");
	erros++;
}
