#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	char nome[5][500];
	float notas[5], temp;
	int i, maior;
	for(i=0;i<5;i++){
    fflush(stdin);
	printf("\nInforme o nome do aluno %d: ", i+1);
    fgets(nome[i],500, stdin);
	printf("Insira a nota de %s: ", nome[i]);
    scanf("%lf", &notas[i]);
  }
 
   
   
