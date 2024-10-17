#include <stdio.h>

int main(int argc, char const *argv[])
{
    int plano, numDependentes, idadeDependentes, totalAdicional = 0;

    printf("Numero de dependentes: ");
    scanf("%d", &numDependentes);
    fflush(stdin);

    for (int i = 0; i < numDependentes; i++)
    {
        printf("Idade do dependente: ", i + 1);
        scanf("%d", &idadeDependentes);
        fflush(stdin);
         if (idadeDependentes < 10){

        totalAdicional += 100;
         } else if (idadeDependentes >= 10 && idadeDependentes <= 30)
         {   totalAdicional += 220;
         }else if (idadeDependentes >= 31 && idadeDependentes <= 60)
         {
        totalAdicional += 395;
        } else {
       totalAdicional += 480;
       };
    }

    plano = 300 + totalAdicional;

    printf("Valor total: R$ %d", plano);

    
    return 0;
}
