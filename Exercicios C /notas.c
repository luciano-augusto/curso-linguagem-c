#include <stdio.h>

int main()
{
    double nota1, nota2, media;

    printf("Digite a priemira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    media = nota1 + nota2;
    printf("\nMedia final: %.1lf\n", media);

    if (media >= 60)
    {
        printf("\nAPROVADO\n");
    }
    else
    {
        printf("\nREPROVADO\n");
    }
    
    
}