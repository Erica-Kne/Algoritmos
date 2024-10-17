#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int numeroAleatorio = rand() % 6;
    int total, escolha ,numeroEscolhido = 0;


    printf("Informe se sua aposta sera par ou impar:\n1)Impar\n2)Par\n");
    scanf("%d", &escolha);
    fflush(stdin);

    printf("Escolha um numero de 0 a 5: ");
    scanf("%d", &numeroEscolhido);
    fflush(stdin);

    total = numeroEscolhido + numeroAleatorio;

    if ( total % 2 == 0 && escolha == 2)
    {
        printf("o numero sorteado foi %d e o total foi %d\n",numeroAleatorio, total);
        printf("Voce ganhou!");
    } else if ( total % 2 != 0 && escolha == 1)
    {
        printf("o numero sorteado foi %d e o total foi %d\n",numeroAleatorio, total);
       printf("Voce ganhou!");
    } else {
        printf("o numero sorteado foi %d e o total foi %d\n",numeroAleatorio, total);
        printf("Voce perdeu...");
    }
    
    
    
    return 0;
}
