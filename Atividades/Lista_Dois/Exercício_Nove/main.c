#include <stdio.h>

int main(int argc, char const *argv[])
{
    double valorDaCompra = 0.0, desconto = 0.0, totalPagar = 0.0;

    printf("Informe o valor total da compra: R$ ");
    scanf("%lf", &valorDaCompra);
    fflush(stdin);

    desconto = (valorDaCompra * 15)/100;
    totalPagar = valorDaCompra - desconto;

    printf("A compra deu R$ %.2lf. Com o desconto de 15%% a compra ficou R$ %.2lf", valorDaCompra, totalPagar);
    return 0;
}
