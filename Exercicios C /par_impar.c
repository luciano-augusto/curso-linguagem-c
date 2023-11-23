#include <stdio.h>
#include <math.h>

int main()
{
    
    int i, x, y;

    printf("Quantos numeros voce vai digitiar: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &y);
        
        if (y > 0 && y % 2 == 0)
        {
            printf("Par Positivo\n");
        }
        else if (y > 0 && y % 2 != 0)
        {
            printf("Ímpar Positivo\n");
        }
        else if (y < 0 && y % 2 == 0)
        {
            printf("Par Negativo\n");
        }
        else if (y < 0 && y % 2 != 0)
        {
            printf("Ímpar Negativo\n");
        }
        else if (y == 0)
        {
            printf("Nulo\n");
        }  
    }

    return 0;
}