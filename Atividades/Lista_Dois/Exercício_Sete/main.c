#include <stdio.h>

int main(int argc, char const *argv[])
{
    int quantPassaros = 0;
    double quantComida = 0.0;

    printf("Informe a quantidade de passaros: ");
    scanf("%d", &quantPassaros);
    fflush(stdin);

    quantComida = quantPassaros * 00.030;

    printf("A quantidade diaria necessaria para alimentar %d passaros e de %.3lf kg's", quantPassaros, quantComida);
    return 0;
}
