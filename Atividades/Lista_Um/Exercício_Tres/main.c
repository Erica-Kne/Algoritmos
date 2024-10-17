#include <stdio.h>

int main(int argc, char const *argv[])
{
    char respostaCorreta [2] = "A";
    char respostaDoUsuario [2] = " ";

    printf("Qual e o verdadeiro nome do super-heroi Batman?\nA)Bruce Wayne\nB)Clark Kent\nC)Peter Parker\nD)Tony Stark\nE)Steve Rogers\n");
    
    scanf("%s", &respostaDoUsuario);
    fflush(stdin);

    printf("Voce respondeu a alternativa %s. A resposta correta e a alternativa %s\n", respostaDoUsuario, respostaCorreta);
    
    return 0;
}
