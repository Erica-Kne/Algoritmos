#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int faces, rolagem;
    srand(time(NULL));

    printf("Escolha o numero de faces do dado (4, 6, 8, 10, 12, 16):" );
    scanf("%d", &faces);

    if (faces != 4 && faces != 6 && faces != 8 && faces != 10 && faces != 12 && faces != 16) {
        printf("numero de faces invalido\n");
    } else{
        rolagem = rand() % faces + 1;
        printf("tu rolou um dado de %d faces e obteve: %d\n", faces, rolagem);
    }





    return 0;
}
