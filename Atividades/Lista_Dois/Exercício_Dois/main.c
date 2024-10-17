#include <stdio.h>

int main(int argc, char const *argv[])
{
    double quantidadeComprada = 0.0;
    double valorTotal = 0.0;

    printf("*** Bem-vindo!***\nO valor atual do dolar em reais e de R$ 05,61.\nInforme quantos dolares deseja comprar:\n");
    scanf("%lf", &quantidadeComprada);
    fflush(stdin);

    valorTotal = quantidadeComprada * 05.61;

    printf("Voce comprou US$ %.2lf. O valor total a ser pago e R$ %.2lf", quantidadeComprada, valorTotal);


    return 0;
}
