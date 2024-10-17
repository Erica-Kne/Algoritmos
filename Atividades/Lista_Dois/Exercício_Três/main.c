#include <stdio.h>

int main(int argc, char const *argv[])
{
    double peso = 0.0, total = 0.0;

    printf("Informe o peso do prato montado: ");
    scanf("%lf", &peso);
    fflush(stdin);

    total = peso * 40.00;

    printf("Valor total a pagar: %.2lf", total);
    return 0;
}
