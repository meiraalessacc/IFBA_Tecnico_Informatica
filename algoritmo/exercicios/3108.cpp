#include<stdio.h>
#include<iostring>
main(){
	FILE *arquivo;
	//abrir o arquivo//
	arquivo=fopen("matutino.txt","wt");
	//checa possiveis erros na abertura//
	if(arquivo==NULL){
		printf("Erro de abertura do arquivo");
		exit(1)
	}
	char c;
	int quant =0;
	while((c=fgetc(arquivo))!=EOF){
		if(c==''){
			quant++;
		}
	}
	fclose(arquivo);
	printf("Foram encontrados %d espaço no texto",quant);
}
