nclude <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL,"portuguese");
	char alunos[15];
	float notas[5];	
	char aluno1[10],aluno2[10],aluno3[10],aluno4[10],aluno5[10];
		printf("Informe o nome do aluno 1:");
		gets(aluno1);
		printf("Informe o nome do aluno 2:");
		gets(aluno2);
		printf("Informe o nome do aluno 3:");
		gets(aluno3);
		printf("Informe o nome do aluno 4:");
		gets(aluno4);
		printf("Informe o nome do aluno 5:");
		gets(aluno5);
	for(int i = 0; i < 5; i++){
		printf("Informe a nota do aluno %d: ",i+1);
		scanf("%f",&notas[i]);}
		printf("Aluno 1:%s\n Nota:%.2f\n", aluno1,notas[0]);
		printf("Aluno 2:%s\n Nota:%.2f\n", aluno2,notas[1]);
		printf("Aluno 3:%s\n Nota:%.2f\n", aluno3,notas[2]);
		printf("Aluno 4:%s\n Nota:%.2f\n", aluno4,notas[3]);
		printf("Aluno 5:%s\n Nota:%.2f\n", aluno5,notas[4]);
	system ("PAUSE");
}

