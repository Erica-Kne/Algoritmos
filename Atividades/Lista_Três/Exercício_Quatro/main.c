#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);
    fflush(stdin);

    if( numero % 3 != 0)
    {
        printf("%d nao e divisivel por 3", numero);
    } else {

        printf("%d e divisivel por 3", numero);
    }
    

    
    return 0;
}
