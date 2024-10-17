#include <stdio.h>

int main(int argc, char const *argv[])
{
    double valorUm, ValorDois, valorTres, somaUm, somaDois;

    printf("Informe:\n");

    printf("Valor um: ");
    scanf("%lf", &valorUm);
    fflush(stdin);

    printf("Valor dois: ");
    scanf("%lf", &ValorDois);
    fflush(stdin);

    printf("Valor tres: ");
    scanf("%lf", &valorTres);
    fflush(stdin);

    somaUm = valorUm + ValorDois;
    somaDois = valorUm + valorTres;

    if(somaUm > somaDois){
        printf("%.2lf e maior que %.2lf", somaUm, somaDois);
    } else {
        printf("%.2lf e menor que %.2lf", somaUm, somaDois);
    }


    return 0;
}
