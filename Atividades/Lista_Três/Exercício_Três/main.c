#include <stdio.h>

int main(int argc, char const *argv[])
{
    double numero, resultado;

    printf("Informe um numero: ");
    scanf("%lf", &numero);
    fflush(stdin);

    if( numero > 0){

        resultado = numero * 2;

        printf("O dobro de %.lf e %.2lf", numero, resultado);

    } else {

        resultado = numero * 3;

        printf("O triplo de %.lf e %.2lf", numero, resultado);

    }
    
    return 0;
}
