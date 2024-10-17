#include <stdio.h>
/*Você está desenvolvendo um simulador ambiental que mede o nível de poluição do ar em 
uma cidade. O nível de poluição é medido a cada 3 horas. Escreva um programa que leia 8 
medições (um dia completo) e determine:
a) A média de poluição diária.
b) Se alguma medição excedeu 150 ppm (partes por milhão), exiba uma mensagem de 
alerta sobre qualidade do ar.
c) Ao final, exiba o número total de medições que geraram um alerta.
*/

int main(int argc, char const *argv[])
{
    int poluicao = 0, media = 0, excedente = 0, alerta = 0, total = 0;

    for (int i = 0; i < 8; i++)
    {
        printf("%d medicao. Nivel de poluicao: ", i+1);
        scanf("%d", &poluicao);
        fflush(stdin);
        total += poluicao;

        if ( poluicao > 150)
        {
            printf("ALERTA! O NIVEL DE POLUICAO ULTRAPASSOU 150 PPM!\n");
            alerta += 1;
        }    
    }

    media = total/8;

    printf("Media da poluicao diaria: %d\n", media);
    printf("Alertas emitidos: %d", alerta);
    

    return 0;
}
