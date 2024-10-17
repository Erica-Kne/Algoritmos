#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int aleatorio, negativo = 0, positivo = 0;

    for (int i = 0; i < 20; i++)
    {
        aleatorio = (rand() % 21) - 10;
        if (aleatorio > 0)
        {
            printf("POSITIVO\n");
            positivo += 1;
        } else if ( aleatorio < 0)
        {
            printf("NEGATIVO\n");
            negativo += 1;
        } else {
            printf("NULO\n");
        }
    }

    printf("Quantidade de positivos: %d\nQuantidade de negativos: %d", positivo, negativo);
    
    return 0;
}
