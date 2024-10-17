#include <stdio.h>

int main(int argc, char const *argv[])
{
    double numerador, denominador, resultado;

    printf("Digite o numerador: ");
    scanf("%lf", &numerador);
    fflush(stdin);
    printf("Digite o denominador: ");
    scanf("%lf", &denominador);
    fflush(stdin);

    if (denominador == 0){
        printf("Nao existe divisao por zero.");
    } else{
        resultado = numerador/denominador;

        printf("%lf/%lf = %.2lf", numerador, denominador, resultado);
    }

    return 0;
}
