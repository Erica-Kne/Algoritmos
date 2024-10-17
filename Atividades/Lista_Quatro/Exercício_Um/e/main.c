#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, media ,soma = 0;

    printf("Digite 15 numeros:\n");

    for (int i = 0 ; i < 15; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
        
    } 

    media = soma/15;

    printf("A soma dos 15 numeros e %d\n", soma);
    printf("A media da soma dos 15 numeros e %d\n", media);
    
    return 0;
}
