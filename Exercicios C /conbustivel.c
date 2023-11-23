#include <stdio.h>

int main()
{
    int alcool, gasolina, diesel, cod;

    alcool = 0;
    diesel = 0;
    gasolina = 0;

    //printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    //scanf("%d", &cod);
    while (cod == 1 || cod == 2 || cod == 3)
    {
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &cod);
        if (cod == 1 )
        {
            alcool ++;
        }
        else if (cod == 2)
        {
            gasolina ++;
        }
        else if (cod == 3)
        {
            diesel ++;
        }
        else 
        {
            break;
        }   
    }
    printf("Muito Obrigado!\n");
    printf("Alcool: %d\n", alcool );
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
    }