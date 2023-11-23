#include <stdio.h>

int main()
{
    double c, f, temp;
    char escala[2]; 

    printf("Voce vai digirar a temepratura em qual escala? (C/F) ");
    fgets(escala, sizeof(escala), stdin);
    if (escala[0] == 'f')
    {
        printf("\nDigite a temperatura em Farenheint: ");
        scanf("%lf", &f);
        c =  (f - 32) / 1.8;
        printf("A temperatura em Celsius é %.2lfº \n", c);
    }
    if (escala[0] == 'c')
    {
        printf("\nDigite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = 1.8 * c + 32;
        printf("A temperatura em Farenheint é %.2lfº \n", f);

        return 0;
    }
    
    

}