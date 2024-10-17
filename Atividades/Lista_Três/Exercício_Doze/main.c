#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Informe a idade do(a) candidato(a): ");
    scanf("%d", &idade);
    fflush(stdin);

    if ( idade >= 5 && idade <= 7)
    {
        printf("O(A) candidato(a) pertence a classe Infantil A.\n");
    } else if (idade >= 8 && idade <= 10)
    {
         printf("O(A) candidato(a) pertence a classe Infantil B.\n");
    }else if (idade >= 11 && idade <= 13)
    {
         printf("O(A) candidato(a) pertence a classe Juvenil A.\n");
    }else if (idade >= 14 && idade <= 17)
    {
         printf("O(A) candidato(a) pertence a classe Juvenil B.\n");
    }else if ( idade >= 18) {
         printf("O(A) candidato(a) pertence a classe Senior.\n");
    }
    
    
    return 0;
}
