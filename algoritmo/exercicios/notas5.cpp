#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	float notas[5], tempo;
	char alunos[5][50], temp2[40];
	for(int i=0;i < 5;i++){
		fflush(stdin);
	printf("Informe o nome do aluno %d:\n",i+1);
	gets(alunos[i]);
	printf("Informe a nota de %s:\n",alunos[i]);
	scanf("%f",&notas[i]);
	}
	system("cls");
	printf("LISTA DE ALUNOS:\n\n");
	for(int i=0; i<5;i++){
	for(j=i+1; j<4; j++){
	if(notas[i] > notas[j]){
    	aux= notas[i];
    	notas[j]= notas[i];
    	j++;
	}
    } 
	printf("\nA lista é: ");
	printf("%s- %.1f", alunos[j], notas[j]);
	}

	//no mesmo for que colocou as notas em ordem, coloque os nomes// 
}
