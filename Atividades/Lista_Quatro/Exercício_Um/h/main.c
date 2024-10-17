#include <stdio.h>

int main(int argc, char const *argv[])
{
    int quantidade, soma = 0, numeros;

    printf("Quantidade de numeros a ser lida: ");
    scanf("%d", &quantidade);
    fflush(stdin);

    for (int i = 0; i < quantidade; i++)
    {
        printf("Informe o %d numero: ", i+1);
        scanf("%d", &numeros);
        fflush(stdin);
        soma += numeros;
    }

    printf("Soma dos numeros inseridos: %d", soma);
    

    return 0;
}
