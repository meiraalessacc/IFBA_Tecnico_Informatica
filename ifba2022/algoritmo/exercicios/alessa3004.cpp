#include <stdio.h>
#include <string.h>
main(){
	char frase[200];
	int cont;
	printf("Informe uma frase:");
	gets(frase);
	for(int i=0;cont<strlen(frase);cont++){
		if(frase[i] =='r'){
			frase[i]='l';
		}
		if(frase[i] =='R'){
			frase[i] ='L';
		}
		 int max = 30;
    printf("\n| %*s | %8s | %8s |", max, "Nome", "Nota");
    printf("\n| %.*s | %8s | %8s |", max, "Nome", "Nota");
    max = 3;
    printf("\n| %*s | %8s | %8s |", max, "Nome", "Nota");
    printf("\n| %.*s | %8s | %8s |", max, "Nome", "Nota");
	}
	printf("\n%s",frase);
}

