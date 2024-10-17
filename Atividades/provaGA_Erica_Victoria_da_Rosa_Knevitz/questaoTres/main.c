#include <stdio.h>
/*em um experimento geológico, sensores medem o deslocamento de uma placa tectônica (em 
centímetros) a cada dia. Escreva um programa que leia os valores de deslocamento para 5 
dias e exiba:
a) O deslocamento total ao longo do período.
b) O maior deslocamento registrado.
c) A média de deslocamento diário*/

int main(int argc, char const *argv[])
{
    float deslocamento, deslocamentoTotal = 0.0, mediaDiaria = 0.0, comparar = 0.0; 

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o deslocamento realizado no dia %d: ", i+1);
        scanf("%f", &deslocamento);
        fflush(stdin);
        if ( comparar < deslocamento)
        {
            comparar = deslocamento;
        }

        deslocamentoTotal += deslocamento;    
    }

    mediaDiaria = deslocamentoTotal/5;

    printf("Deslocamento total ao longo do periodo: %.2f\n", deslocamentoTotal);
    printf("O maior deslocamento registrado: %.2f\n", comparar);
    printf("A media de deslocamento: %.2f\n", mediaDiaria);
    
    return 0;
}
