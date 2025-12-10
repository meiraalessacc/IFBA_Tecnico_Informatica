#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float a;
    float imc;
    printf("INforme sua altura em metros");
    scanf("%f", &a);
    
    imc=(72.7 * a)-58;
    
    printf("Seu peso ideal e:%f",imc);
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
