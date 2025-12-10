include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL,"portuguese");
	float notas[10];	
	char aluno1[10],aluno2[10],aluno3[10],aluno4[10],aluno5[10],aluno6[10],aluno7[10],aluno8[10],aluno9[10],aluno10[10];
	float media=6;
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
		printf("Informe o nome do aluno 6:");
		gets(aluno6);
		printf("Informe o nome do aluno 7:");
		gets(aluno7);
		printf("Informe o nome do aluno 8:");
		gets(aluno8);
		printf("Informe o nome do aluno 9:");
		gets(aluno9);
		printf("Informe o nome do aluno 10:");
		gets(aluno10);
		printf("Aluno 1:%s\n Nota:%.2f\n", aluno1,notas[0]);
		printf("Aluno 2:%s\n Nota:%.2f\n", aluno2,notas[1]);
		printf("Aluno 3:%s\n Nota:%.2f\n", aluno3,notas[2]);
		printf("Aluno 4:%s\n Nota:%.2f\n", aluno4,notas[3]);
		printf("Aluno 5:%s\n Nota:%.2f\n", aluno5,notas[4]);
		printf("Aluno 6:%s\n Nota:%.2f\n", aluno6,notas[5]);
		printf("Aluno 7:%s\n Nota:%.2f\n", aluno7,notas[6]);
		printf("Aluno 8:%s\n Nota:%.2f\n", aluno8,notas[7]);
		printf("Aluno 9:%s\n Nota:%.2f\n", aluno9,notas[8]);
		printf("Aluno 10:%s\n Nota:%.2f\n", aluno10,notas[9]);
	system ("PAUSE");		
}
