#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);
    fflush(stdin);

    if( numero % 2 != 0)
    {
        printf("%d e impar", numero);
    } else {

        printf("%d e par", numero);
    }
    

    
    return 0;
}