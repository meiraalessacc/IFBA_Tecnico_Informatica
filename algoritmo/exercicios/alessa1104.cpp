#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	char palavra [15], invertida [15];
	int cont, i=0;
	printf ("Informe a palavra ");
	gets (palavra); 
	for(cont=strlen(palavra) -1;cont >= 0; cont--){
		invertida[i]= palavra [cont];
		i++;
	}
	invertida[i] = '\0';
	printf("Palavra lida: %s",palavra);
	printf("\n\nPalavra invertida:%s",invertida);
	if(strcmp(palavra,invertida)==0){
		printf("\n\nPALINDROME");
	}else{
		printf("\n\nNAO PALINDROME");
	}
	system("PAUSE");
}
