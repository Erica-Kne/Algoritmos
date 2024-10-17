#include <stdio.h>

int main(int argc, char const *argv[])
{
    int divisor, inicioInt, finalInt; 

    printf("Entre com o valor do divisor: ");
    scanf("%d", &divisor);
    fflush(stdin);
    printf("Inicio do intervalo: ");
    scanf("%d", &inicioInt);
    fflush(stdin);
    printf("Final do intervalo: ");
    scanf("%d", &finalInt);
    fflush(stdin);

    printf("Numeros divisiveis por %d no intervalo de %d a %d:\n", divisor, inicioInt, finalInt);

    for (int i = inicioInt; i < finalInt + 1; i++)
    {
        if( i % divisor == 0){
        printf(" %d ", i);
        }
    }
    
    return 0;
}
