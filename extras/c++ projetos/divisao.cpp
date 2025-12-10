#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float n1,n2,div;
    printf("Digite o primeiro numero");
    scanf("%f", &n1);
    printf("Digite o primeiro numero");
     scanf("%f", &n2);
     div=n1/n2;
     printf("a divisao e igual a %f", div);
    system("PAUSE");
    return EXIT_SUCCESS;
}
