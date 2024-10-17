#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor, notasDe100, notasDe50, notasDe20, notasDe10, notasDe5, notasDe1;

    printf("Informe o valor: ");
    scanf("%d", &valor);
    fflush(stdin);

    notasDe100 = valor/100;
    valor %= 100;

    notasDe50 = valor/50;
    valor %= 50;

    notasDe20 = valor/20;
    valor %= 20;

    notasDe10 = valor/10;
    valor %= 10;

    notasDe5 = valor/5;
    valor %= 5;

    notasDe1 = valor/1;
    valor %= 1;

    if (notasDe100 > 0)
    {
        printf("%d notas de R$ 100\n", notasDe100 );
    }
    if (notasDe50 > 0)
    {
        printf("%d notas de R$ 50\n", notasDe50);
    }
    if (notasDe20 > 0)
    {
        printf("%d notas de R$ 20\n", notasDe20);
    }
    if (notasDe10 > 0)
    {
        printf("%d notas de R$ 10\n", notasDe10);
    }
    if (notasDe5 > 0)
    {
        printf("%d notas de R$ 5\n", notasDe5);
    }
    if (notasDe1 > 0)
    {
        printf("%d notas de R$ 1\n", notasDe1);
    }

    return 0;
}
