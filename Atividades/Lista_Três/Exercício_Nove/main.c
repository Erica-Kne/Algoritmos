#include <stdio.h>

int main(int argc, char const *argv[])
{
    float conversao, reais, dolar, euros = 0.0;
    int opcao = 0;

    do{
        printf("\nSelecione uma opcao\n1) Converter de Real para Euro\n2) Converter de Real para Dolar\n");
        printf( "3) Converter de Euro para Dolar\n4) Converter de Euro para Real\n");
        printf( "5) Converter de Dolar para Euro\n6) Converter de Dolar para Real\n");
        printf( "7) Sair\n");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao)
        {
            case 1:
                printf("informe o valor em reais a ser convertido em euros: R$ ");
                scanf("%f", &reais);
                fflush(stdin);
                conversao =  reais/6.16;
                printf("R$ %.2f convertidos para euros equivale a %.2f euros", reais, conversao);
            break;

            case 2:
                printf("informe o valor em reais a ser convertido em dolares: R$ ");
                scanf("%f", &reais);
                fflush(stdin);
                conversao =  reais/5.61;
                printf("R$ %.2f convertidos para euros equivale a %.2f dolares", reais, conversao);
            break;
            case 3:
                printf("informe o valor em euros a ser convertido em dolares: ");
                scanf("%f", &euros);
                fflush(stdin);
                conversao =  euros * 1.10;
                printf(" %.2f euros convertidos para dolares equivale a US$ %.2f ", euros, conversao);
            break;
            case 4:
                printf("informe o valor em euros a ser convertido em reais: ");
                scanf("%f", &euros);
                fflush(stdin);
                conversao =  euros * 6.16;
                printf("%.2f euros convertidos para reais equivale a R$ %.2f ", euros, conversao);
            break;
            case 5:
                printf("informe o valor em dolares a ser convertido em euros: US$ ");
                scanf("%f", &dolar);
                fflush(stdin);
                conversao =  dolar * 0.91;
                printf("US$ %.2f convertidos para euros equivale a %.2f euros", dolar, conversao);
            break;
            case 6:
                printf("informe o valor em dolares a ser convertido em reais: US$ ");
                scanf("%f", &dolar);
                fflush(stdin);
                conversao =  dolar * 5.61;
                printf("US$ %.2f convertidos para reais equivale a  R$ %.2f ", dolar, conversao);
            break;
        
        default:
            break;
        }



    }while(opcao != 7);
 
    
    



    return 0;
}
