#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int primeiro, segundo, terceiro;

    srand(time(NULL));

    while ( primeiro > segundo || segundo > terceiro || primeiro == segundo || segundo == terceiro)
    {
        primeiro = (rand() % 10)+ 1;
        segundo = (rand() % 10)+ 1;
        terceiro = (rand() % 10)+ 1;
    }
    printf("Numeros sorteados:\nPrimeiro: %d\nSegundo: %d\nTerceiro: %d", primeiro, segundo, terceiro);
    

    return 0;
}
