#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valorDoItem, totalAPagar, desconto, formaDePagamento, juros;

    printf("Valor do item: R$ ");
    scanf("%d", &valorDoItem);
    fflush(stdin);
    printf("Forma de pagamento\n1)A vista, com 15 %% de desconto\n2)Credito, com 10 %% de desconto\n3)2x sem juros\n4)3x com 10 %% de juros");
    scanf("%d", &formaDePagamento);
    fflush(stdin);

    if ( formaDePagamento == 1)
    {
        desconto = (15 * valorDoItem)/100;
        totalAPagar = valorDoItem - desconto;
        printf("Tota a pagar: R$ %d", totalAPagar);
    } else if ( formaDePagamento == 2)
    {       
        desconto = (10 * valorDoItem)/100;
        totalAPagar = valorDoItem - desconto;
        printf("Tota a pagar: R$ %d", totalAPagar);
    } else if ( formaDePagamento == 3)
    {
        totalAPagar = valorDoItem;
        printf("Tota a pagar: R$ %d", totalAPagar);
    } else if ( formaDePagamento == 4)
    {
        juros = (10 * valorDoItem)/100;
        totalAPagar = valorDoItem + juros;
        printf("Tota a pagar: R$ %d", totalAPagar);
    }
    
    
   

    return 0;
}
