#include <stdio.h>
#include <string.h>
main(){
	char palavra1[50], palavra2[50];
	printf("Informe as palavras:");
	scanf("%s %s",palavra1,palavra2);
	if(strcmp(palavra1,palavra2)<0){
		printf("\n%s\n%s",palavra1,palavra2);
	}else{
		printf("\n%s\n%s",palavra2,palavra1);
	}
	
}
