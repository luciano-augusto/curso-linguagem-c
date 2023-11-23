#include <stdio.h>

int main()
{
    double larg, comp, preco, area, valor;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &larg);
    printf("Digite o comprimeiro do terreno: ");
    scanf("%lf", &comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &preco);

    area = comp * larg;
    valor = preco * area; 

    printf("Area total do terreno: %.2lf m2.\n", area);
    printf("Preço do terreno: R$ %.2lf.\n", valor);

    return 0;
}