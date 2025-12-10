//Crie um algoritmo que leia um vetor de 30 números inteiros e gere um segundo vetor cujas posições pares são o dobro do vetor original e as ímpares são o triplo.//

#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"portuguese");
	
	int i,a[30],b[30];
	
	for(i=0,i<30;i++;)
	{
		printf("\n Digite o valor A posição %i:");
		scanf("%d",&a[i]);
		
		if(a[i]%2==0){
		b[i]=a[i]*2;}
		else{b[i]=a[i]*3;}
		
		printf("Valor B posição %i = %i",i,b[i]);
		};
	}
	

