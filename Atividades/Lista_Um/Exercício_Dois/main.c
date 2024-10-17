#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome [50] = " ";

    printf("Informe o seu nome:\n");
    scanf("%s", &nome);
    fflush(stdin);

    printf("Boas-vindas, %s!\n", nome);
    
    return 0;
}
