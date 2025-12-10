#include <stdio.h>
#include <stdlib.h>
#include <iostream>

typedef struct{
	char nome [20];
	char especie[20];
	char raca[15];
	int idade;
	float peso;
} animal;

int menu(int opcao){
	system ("cls");
	printf("\n\nMENU\n");
	printf("1 - Cadastrar\n2 - lista\n3 - buscar\n4 - Sair");
	scanf("%d",&opcao);
	return opcao;
}

void gravar(FILE *arq, char nomearq[20]){
	animal pet;
	printf("Informe o nome do pet: ");
	fflush("stdin");
	gets(pet.nome);
	printf("Informe a especie: ");
	fflush("stdin");
	gets(pet.especie);
	printf("Informe a raça: ");
	fflush("stdin");
	gets(pet.raca);
	printf("Informe a idade: ");
	scanf("%d",&pet.idade);
	printf("Informe o peso do pet: ");
	scanf("%f",&pet.peso);
	arq=fopen(nomearq,"ab");
	fwrite(&pet,sizeof(animal),1,arq);
	fclose(arq);	
}
void ler(FILE *arq,char nomearq[20]){
	animal pet;
	arq=fopen(nomearq,"rb");
	if(arq==NULL){
		printf("\nErro na abertura do arquivo");
	}else{
		fread(&pet,sizeof(animal),1,arq);
		fclose(arq);
		printf("\n\nDADOS DO PET\n";
		printf("Nome: %s ESpecie %s  Raca: %s ",pet.nome,pet.especie,pet.raca);
		printf("Idade:%d Peso %.1f",pet.idade,pet.peso;)
	}
}
main(){
	FILE*arq;
	char nomearq[20];
	int opcao;
	printf("Informe o arquivo desejado:");
	gets(nomearq);
	do{
		opcao=menu(opcao);
		switch(opcao){
			case 1:gravar(arq,nomearq);break;
			case 2:ler(arq,nomearq);break;
			case 3:break;
			case 4:break;
			default:printf("Opcao invalida");
		}
	}while(opcao!=a);
}
