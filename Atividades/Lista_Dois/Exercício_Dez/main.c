#include <stdio.h>

int main(int argc, char const *argv[])
{
    int camisetas = 0, calcas = 0, cintos = 0;
    double valorDaCompra = 0.0, desconto = 0.0, total = 0.0;

    printf("Informe quantas camisetas foram compradas: ");
    scanf("%d", &camisetas);
    fflush(stdin);
    printf("Informe quantas calcas foram compradas: ");
    scanf("%d", &calcas);
    fflush(stdin);
    printf("Informe quantos cintos foram comprados: ");
    scanf("%d", &cintos);
    fflush(stdin);

    valorDaCompra = (camisetas * 25.00) + (calcas * 100.00) + (cintos * 40);
    desconto = (valorDaCompra * 10)/100;
    total = valorDaCompra - desconto;

    printf("O valor total da compra ficou R$ %.2lf. Com desconto de 10%% ficou R$ %.2lf", valorDaCompra, total);


    return 0;
}
