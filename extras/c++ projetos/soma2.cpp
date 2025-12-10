#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n1;
    int n2;
    int soma;
    printf("digite um numero");
    scanf("%d",&n1);
    printf ("digite outro numero");
    scanf("%d",&n2);
    soma = n1+n2;
    printf("Soma e igual a:%d", soma);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
