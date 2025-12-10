#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"portuguese");
	
	int i, a[30],b[30];
	for(i = 0; i < 30; i++){
		printf("\n Digite o valor A posição %i :",i);
		scanf("%i",&a[i]);
		
		if(a[i]%2==0){b[i]=a[i]*2;}
		else{
		b[i]=a[i]*3;
		printf("Valor B posição %i = %i",i,b[i]);}
	}
	
	system("pause");
	return(0);
}
