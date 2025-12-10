#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
    float n1,n2,sub;
    printf("Digite o primeiro nuemro");
    scanf("%f",&n1);
    printf("Digite o segundo nuemro");
      scanf("%f",&n2);
      sub=n1-n2;
      printf("A subtracao e igaul a :%.2lf",sub);
    system("PAUSE");
    return EXIT_SUCCESS;
}
