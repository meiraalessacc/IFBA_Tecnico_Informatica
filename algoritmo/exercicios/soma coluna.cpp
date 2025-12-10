#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int tam = 4;
int m[4][4];

//função linha//
int somarLinha(int l){
    int c, soma = 0;

    for(c = 0; c < tam; c++)
        soma += m[l][c];
    return soma;
}
//função coluna//

int somarColuna(int c){
    int l, soma = 0;

    for(l = 0; l < tam; l++)
        soma += m[l][c];
    return soma;
}

int main() {

    int i, j;
   	int m[4][4];
	int contp=0;
	int conti=0;
	
for(int i=0;i<4;i++){

for(int j = 0; j<4;j++){
	printf("digite o valor da matriz[%d][%d]:", i,j);
	scanf("%d",&m[i][j]);
	if(m[i][j]%2 == 0){
		contp+=1;
	}else{
		conti+=1;
	}
	}
	}
		printf("\n\n Matriz gerada:");
	for(int x=0;x<4;x++){
		printf("\n");
	for(int y=0;y<4;y++){
		printf("%d",m[x][y]);
}
}
	printf("Quantidade de numeros pares:%d\n",contp);
	printf("Quantidade de numeros impares:%d\n",conti);
	
    printf("\n");
    // imprime a soma de todas as linhas//
    for(i = 0; i < tam; i++)
        printf("Soma da linha %d: %d\n",i, somarLinha(i));

    printf("\n");
    // imprime a soma de todas as colunas //
    for(i = 0; i < tam; i++)
        printf("Soma da coluna %d: %d\n",i, somarColuna(i));

    return 0;
}
