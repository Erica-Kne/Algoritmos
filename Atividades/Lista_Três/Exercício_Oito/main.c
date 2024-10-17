#include <stdio.h>

int main(int argc, char const *argv[])
{
    float produto, lucro = 0.0;

    printf("Valor do produto: R$  ");
    scanf("%f", &produto);

    if (produto < 20.00)
    {
        lucro = (produto * 45) / 100;
        printf("O lucro foi de %.2f", lucro);
        
    } else if (produto <= 50.00)
    {
        lucro = (produto * 35) / 100;
        printf("O lucro foi de %.2f", lucro);
    } else{

        lucro = (produto * 25) / 100;
        printf("O lucro foi de %.2f", lucro);
    }
    
    
    return 0;
}
