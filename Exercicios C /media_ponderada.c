#include <stdio.h>

int main()
{
    double x, media, peso1, peso2, peso3, num1, num2, num3;
    int i, j;

    peso1 = 2;
    peso2 = 3;
    peso3 = 5;
    media = 0;

    printf("Quantos casos voce vai digitar: ");
    scanf("%lf", &x);

    for (i = 0; i < x; i++)
    {
        printf("Digite 3 numeros: ");
        scanf("%lf", &num1);
        scanf("%lf", &num2);
        scanf("%lf", &num3);
        
        media = (num1 * peso1 + num2 * peso2 + num3 * peso3) / (peso1 + peso2 + peso3);
        printf("Media: %.1lf \n", media);    
    }
    return 0;   
}