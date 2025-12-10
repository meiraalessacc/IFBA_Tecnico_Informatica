#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
main(){
	setlocale(LC_ALL,"portuguese");
	float notas[5], tempo;
	char alunos[5][40], temp2[40];
	for(int i = 0; i < 5; i++){
		fflush(stdin);
		printf("Informe o nome do aluno %d: ",i+1);
		gets(alunos[i]);
		printf("informe a nota de %s: ",alunos[i]);
		scanf("%f",&notas[i]);
		}
		system("cls");
		
		printf("\nNOTAS DOS ALUNOS:\n");
		for(int i = 0; i < 4; i++){
		 for(int j=i+1; j < 5 ; j++){
			if(notas[i]<notas[j]){
          	 tempo=notas[i];
             notas[i]=notas[j];
             notas[j]=tempo;
             
        	strcpy(temp2,alunos[i]);
        	strcpy(alunos[i],alunos[j]);
        	strcpy(alunos[j],temp2);
        	
		}   
	}
}
        for(int i=0; i<5; i++){         
            printf("%s,%.1f\n",alunos[i],notas[i]);
		}
        
       
    }






