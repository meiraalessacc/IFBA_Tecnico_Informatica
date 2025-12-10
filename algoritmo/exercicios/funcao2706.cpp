#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define quant 100
int sortear(){
	int num;
	srand(time(NULL));
	num = rand()%quant;
	return num;
}
main(){
	int num;
	num=sortear();
	printf("O valor sorteado foi de %d",num);
}
