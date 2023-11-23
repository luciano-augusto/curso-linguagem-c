#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, i, soma;
    soma = 0;

    printf("Digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);

    for ( i = x; i < y ; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
        else
        {
            continue;
        }   
    }
    printf("Soma dos impares: %d\n", soma);
}