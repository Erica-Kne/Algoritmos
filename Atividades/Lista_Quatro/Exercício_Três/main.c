#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Informe um numero de 1 a 9: ");
    scanf("%d", &numero);
    fflush(stdin);

    if (numero < 1 || numero > 9)
    {
        printf ("Numero invalido!");
    } else {
        for (int i = 1; i < 11 ; i++)
        {
            printf("%d X %d = %d\n", numero, i, numero * i );
        }
        
    }
    
    return 0;
}
