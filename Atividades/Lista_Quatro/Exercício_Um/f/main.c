#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0, pares = 0, impares = 0;

    printf("Digite 10 numeros:\n");

    for (int i = 1 ; i < 11; i++)
    {
        printf("Numero %d: ", i );
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares += 1;
        } else {
            impares += 1;
        } 
    } 

    printf("Quantidade de numeros pares: %d\nQuantidade de numeros impares: %d", pares, impares);

    
    
    return 0;
}