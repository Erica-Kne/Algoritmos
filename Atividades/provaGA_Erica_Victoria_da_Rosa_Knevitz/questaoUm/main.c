#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{   
    srand(time(NULL));

    int aleatorioUm, aleatorioDois;
    float aleatorioTres;

    aleatorioUm = (rand() % 101) - 50;
    printf("Numero sorteado no intervalo de - 50 a 50: %d\n", aleatorioUm);

    
    

    return 0;
}
