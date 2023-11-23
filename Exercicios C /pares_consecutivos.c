#include <stdio.h>
#include <math.h>

int main()
{
    int x, soma, i;
    soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    if (x % 2 == 0)
    {
        soma += x;
        for (i = 0; i < 4; i++)
        {
            x += 2;
            soma += x;
        }
    }
    else 
    {
        soma = x += 1;
        for ( i = 0; i < 4; i++)
        {
            x += 2;
            soma += x;
        }
        
    }

    printf("A soma dos pares consecutivos é: %d \n", soma);
}