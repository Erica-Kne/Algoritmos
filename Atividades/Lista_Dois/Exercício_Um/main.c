#include <stdio.h>

int main(int argc, char const *argv[])
{
    int minutos, segundos;

    printf("Informe o tempo em minutos:\n");
    scanf("%d", &minutos);
    fflush(stdin);

    segundos = minutos * 60;

    printf("%d minuto(s) equivale(m) a %d segundos.\n", minutos, segundos);
    return 0;
}
