#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
    float n1, n2, multi;
    
    printf("Digite o primeiro numero ");
    scanf("%f",&n1);
    printf ("digite o segundo numero"); 
    scanf("%f" , &n2);
    multi = n1*n2;
    
    printf("multiplicacao igual a : %.2f" ,multi);
    system("PAUSE");
    return EXIT_SUCCESS;
}
