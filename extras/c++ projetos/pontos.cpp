#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int x1, y1,x2,y2;
    int dist;
    printf("informe x1 e y1");
    scanf("%d %d",&x1,&y1);
    printf("informe x2 e y2");
    scanf("%d %d",&x2,&y2);
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("a distancia entre os pontos e:%d",dist);
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
