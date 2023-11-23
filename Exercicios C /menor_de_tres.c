#include <stdio.h>

int main()
{
    int x1, x2, x3, menor;

    printf("\nDigite o primeiro valor: ");
    scanf("%d", &x1);
    printf("Digite o segundo valor: ");
    scanf("%d", &x2);    
    printf("Digite o terceiro valor: ");
    scanf("%d", &x3);
    menor = x1;

    if (x2 < menor)
    {
        menor = x2;
    }
    if (x3 < menor)
    {
        menor = x3;
    }

    printf("\nMenor: %d\n", menor);
    
}
