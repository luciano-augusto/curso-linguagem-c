#include <stdio.h>

int main()
{
    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    while (nota1 > 10 || nota1 < 0)
    {
        printf("Nota invalida. Tente novamente: ");
        scanf("%lf", &nota1);
    }
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    while (nota2>10 || nota2 <0)
    {
        printf("Nota invalida. Tente novamente: ");
        scanf("%lf", &nota2);
    }
    media = (nota1 + nota2) / 2;
    printf("Media: %.2lf\n", media);

}