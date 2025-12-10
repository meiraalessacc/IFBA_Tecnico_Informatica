#include<stdio.h>
#include<stdlib.h>
float potencia( float base, int expoente){
	float p=1;
	for(int i=0; i<expoente;i++){
		p=p*base;
	}
	return p;
}

