#include <stdio.h>

int main(int argc, char const *argv[])
{
    double grauA = 0.0, grauB = 0.0, notaFinal = 0.0, notaGA = 0.0, notaGB = 0.0;

    printf("informe a sua nota do Grau A:\n");
    scanf("%lf", &grauA);
    fflush(stdin);

    printf("Informe a sua nota do Grau B:\n");
    scanf("%lf", &grauB);
    fflush(stdin);

    notaGA = grauA * 0.33;
    notaGB = grauB * 0.67;

    notaFinal = notaGA + notaGB;

    printf("******* RESUMO DO SEMESTRE *******\nMedia no GA: %.2lf\nMedia no GB: %.2lf\nMedia final: %.2lf", notaGA, notaGB, notaFinal);
    return 0;
}
