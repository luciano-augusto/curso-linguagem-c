#include <stdio.h>

int main()
{
    double dist, consumo, media;

    printf("Distancia percorrida: ");
    scanf("%lf", &dist);
    printf("Combustivel gasto: ");
    scanf("%lf", &consumo);

    consumo = dist / consumo;
    printf("Consumo médio: %.2lf\n", consumo);

    return 0;
}