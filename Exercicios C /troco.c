#include <stdio.h>

int main()
{
    double preco, qntd, receb, troco;

    printf("Preço unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%lf", &qntd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &receb);

    troco = receb - (preco * qntd);

    printf("Troco: R$%.2lf \n", troco);

    return 0;
}