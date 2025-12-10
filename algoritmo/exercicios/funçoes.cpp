/* a funçaõ deve ler um numero inteiro e  apresentar seus divisores*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void divisores(int num,int quant){
    
    quant = 0; 
    printf(" Insira um numero: ");
    scanf("%d", &num);
    
    printf("\n Divisores de (%d): ", num);
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf(" %d ", i);
            quant++; 
        }
    } 
    printf("\n\n Numero de divisores: %d\n\n", quant);

    system("pause");
    
}
main(){
	int num;
	int quant;
	divisores(num,quant);
	system("PAUSE");

}





