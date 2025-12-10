#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n1;
    printf("Digite um numero:");
    scanf("%d",&n1);
    if(n1>= 1){
            printf("Numero positivo");
            }else{
                  printf("numero negativo");}
                  
    int n2;
    printf("Digite um numero:");
    scanf("%d",&n2);
    if(n2<= 1){
            printf("Numero negativo");
            }else{
                  printf("numero positivo");}
                  
    system("PAUSE");
    return EXIT_SUCCESS;
}
