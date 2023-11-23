#include <stdio.h>

int main()
{
    int minutos, valor;

    printf("Digite a quantida de minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 100)
    {
        printf("Valor a pagar R$50,00.\n");
    }
    else
    {
        valor = (minutos - 100) * 2;
        printf("Valor a pagar: R$%d.00\n", valor + 50);
    }
    
}