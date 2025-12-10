#include <stdio.h>
#include<stdlib.h>
int fatorial (int num){
	int f =1;
	for(int i= num; i>=1;i--){
		f=f*i;
	}
	return f;//toda vez que for fazer um calculo, utilize uma funçao//
}
main(){
	int num, fat;
	printf("Informe um numero inteiro:");
	scanf("%d",&num);
	fat=fatorial(num);
	printf("O fatorial de %d=%d", num,fat);
}


