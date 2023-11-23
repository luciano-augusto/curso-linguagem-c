#include <stdio.h>

int main()
{
    double valor;
    int qntd, cod;

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &qntd);

    if (cod == 1)
    {
        valor = 5 * qntd;
    }
    else if (cod == 2)
    {
        valor = 3.5 * qntd;
    }
    else if (cod == 3)
    {
        valor = 4.8 * qntd;
    }
    else if (cod == 4)
    {
        valor = 8.9 * qntd;
    }
    else if (cod == 5)
    {
        valor = 7.32 * qntd;
    }
    
    printf("Valor a pagar R$%.2lf\n", valor);

}