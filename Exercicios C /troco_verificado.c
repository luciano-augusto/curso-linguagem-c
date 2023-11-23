#include <stdio.h>

int main()
{
    double qntd, troco, preco, recebido, total;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &qntd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);  

    total = preco * qntd;

    if (recebido >= total)
    {
        troco = recebido - total;
        printf("Troco: R$%.2lf. \n", troco);
    }
    else if (recebido < total)
    {
        troco = total - recebido;
        printf("Valor insuficiente. Faltam R$%.2lf. \n", troco);
    }
    

}