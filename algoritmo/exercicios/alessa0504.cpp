#include <stdio.h>
#include <stdlib.h>
main(){
	int dividendo,divisor,quociente=0;
	printf("Informe um numero inteiro positivo");
	scanf("%d",&dividendo);
	for(divisor=2;divisor<=dividendo/2;divisor++)
		if(dividendo%divisor == 0){
		quociente++;
		break;
	}
		if(quociente==0){
			printf("O numero e primo ");
		}else{
			printf("O numero nao e primo ");
		}
		system("PAUSE");
	}
	

