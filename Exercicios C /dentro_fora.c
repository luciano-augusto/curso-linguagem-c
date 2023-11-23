#include <stdio.h>

int main()
{
    int x, y, i, dentro, fora;
    
    dentro = 0;
    fora = 0;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &x);
    
    for (i = 0; i < x; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &y);
        if (y > 10 && y <20)
        {
            dentro ++;
        }
        else
        {
            fora ++;
        }
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA \n", fora);

    return 0;
}