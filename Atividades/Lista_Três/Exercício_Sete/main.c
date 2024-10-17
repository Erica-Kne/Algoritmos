#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario, desconto = 0.0;

    printf("Informe o valor do salario a ser calculado: ");
    scanf("%f", &salario);
    fflush(stdin);

    desconto = (salario * 11)/100;

    if( desconto <= 318.20){

        printf("O desconto e de: %.2f", desconto);
    } else {

        printf("O desconto e de: %.2f", 318.20);
    }
    return 0;
}
