//*Uso de vetores em c//*
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	int num [10], temp;
	for(int i= 0;i<10;i++){
		printf("Informe o número %d: ",i+1);
		scanf("%d",&num[1]);	
	}
	printf("\n\nNúmeros na ordem lida:");
	for(int i=0; i<10;i++){
		printf("%d",num[i]);
	}
	printf("\n\nNúmeros em ordem inversa:");
	for(int i = 9;i>=0; i--){
		printf("%d",num[i]);
	}
		for (int i=0;i<9;i++){
			for(int j=i+1; i<10; j++){
		if(num[1] > num[j]){
			temp = num[i];
			num[i]=num [j];
			num[j]=temp;
		}
	
	}
}
	printf("\n\nNúmeros na ordem Crescente;");
	for(int i=0; i<10; i++){
		printf("%d",num[i]);
	}
}


