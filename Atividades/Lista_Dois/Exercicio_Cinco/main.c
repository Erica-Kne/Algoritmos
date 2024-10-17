#include <stdio.h>

int main(int argc, char const *argv[])
{
    double precoGasolina = 0.0, valorDisponivel= 0.0, totalComprado = 0.0;

    printf("Informe quanto custa o litro da gasolina: R$ ");
    scanf("%lf", &precoGasolina);
    fflush(stdin);
    printf("Informe o valor que possui para abastecer: R$ ");
    scanf("%lf", &valorDisponivel);
    fflush(stdin);

    totalComprado = valorDisponivel/precoGasolina;

    printf("E possivel comprar %.2lf litros de gasolina com R$ %.2lf .", totalComprado, valorDisponivel);

    return 0;
}
