#include <stdio.h>

int main()
{
    double glicose;

    printf("Digite a média da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100)
    {
        printf("Classificação: Normal\n");
    }
    else if (glicose > 100 && glicose <= 140)
    {
        printf("Classificação: Elevado\n");
    }
    else
    {
        printf("Classificação: DIABETES\n");
    }
    
}