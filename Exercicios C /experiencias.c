#include <stdio.h>

int main(){

    int casos, i, qntd, sapo, coelho, rato, total;
    char tipo;
    double psapo, pcoelho, prato;
    
    sapo = 0;
    coelho = 0;
    rato = 0;
    total = 0;

    printf("Quantos casos de teste serao digitados: ");
    scanf("%d", &casos);

    for (i = 0; i < casos; i++)
    {
        printf("\nQuantidade de cobaias: ");
        scanf("%d", &qntd);
        printf("Tipode coabias: ");
        scanf(" %c", &tipo);

        if (tipo == 'S')
        {
            sapo += qntd;
            total += qntd;
        }
        else if (tipo == 'C')
        {
            coelho += qntd;
            total += total;
        }
        else if (tipo == 'R')
        {
            rato += qntd;
            total += qntd;
        }
        
    }
    printf("\n--Relatorio final-- \n");
    printf("\nTotal de coabais: %d \n", total);
    printf("Sapos: %d \n", sapo);
    printf("Coelhos: %d \n", coelho);
    printf("Ratos: %d \n", rato);

    psapo = ((double)sapo/total)*100;
    printf("\nPorcentagem de sapos: %.2lf %%\n", psapo);
    pcoelho = ((double)coelho / total)*100;
    printf("Porcentagem de coelhos: %.2lf %%\n", pcoelho);
    prato = ((double)rato/total)*100;
    printf("Porcentagem de ratos: %.2lf %%\n", prato);

    return 0; 
}