#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    int gA, gB, gC, resultado; 
    char opcao [4];


    printf("Nota do Grau A: ");
    scanf("%d", &gA);
    fflush(stdin);
    printf("Nota do Grau B: ");
    scanf("%d", &gB);

    resultado = (gA * 0.33) + (gB * 0.67);

    if ( resultado >= 6)
    {
        printf("Aprovado(a).");
    } else{
        printf("Sera necessario fazer o Grau C. Informe a nota alcancada no Grau C: ");
        scanf("%d", &gC);
        printf("Informe qual nota deseja susbtituir:\na) Grau A\nb) Grau B \n");
        scanf("%s", &opcao);
        fflush(stdin);

        if (strcmp(opcao, "a") == 0)
        {
            resultado = (gC * 0.33) + (gB * 0.67);
            if ( resultado >= 6)
            {
                printf("Aprovado(a).");
            } else{
                 printf("Reprovado(a)");
            }
            
        } else if ( strcmp (opcao, "b") == 0){
            resultado = (gA * 0.33) + (gC * 0.67);
            if ( resultado >= 6)
            {
                printf("Aprovado(a).");
            } else{
                printf("Reprovado(a)");
            }
        }
        
    }
    
    



    return 0;
}
