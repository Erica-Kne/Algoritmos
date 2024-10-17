#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int resposta, aleatorio;
     aleatorio = (rand() % 10) + 1;

    for (int i = 0; i < 3; i++)
    {   
        printf ("Resposta: ");
        scanf("%d", &resposta);
        fflush(stdin);

        if ( resposta > aleatorio)
        {
            printf("O numero sorteado e menor que %d.\n", resposta);
        } else if (resposta < aleatorio)
        {
            printf("O numero sorteado e maior que %d.\n", resposta);
        } else if ( aleatorio == resposta)
        {
            printf("Tu ganhou!\n");
            break;
        }   
        
    }

    printf("O numero sorteado foi %d", aleatorio);
    
    return 0;
}
