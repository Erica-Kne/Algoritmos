#include <stdio.h>

#define smartphone 1000.00
#define tablet 1500.00

int main(int argc, char const *argv[])
{
    int quantidadeVendidaSmartphone = 0, quantidadeVendidaTablet = 0;
    double totalArrecadado = 0.0;
    printf("Informe quantos Smartphones foram vendidos: ");
    scanf("%d", &quantidadeVendidaSmartphone);
    fflush(stdin);
    printf("Informe quantos Tablets foram vendidos: ");
    scanf("%d", &quantidadeVendidaTablet);
    fflush(stdin);

    totalArrecadado = (quantidadeVendidaSmartphone * smartphone) + (quantidadeVendidaTablet * tablet);

    printf("******** RESUMO DE VENDAS ********\nTotal de Smartphones vendidos: %d\nTotal de Tablets vendidos:%d\nValor total acumulado com as vendas: R$ %.2lf", 
        quantidadeVendidaSmartphone, quantidadeVendidaTablet, totalArrecadado);
    return 0;
}
