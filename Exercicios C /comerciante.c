#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n"); 
}

int main(){
    int n, i, abaixo, entre, acima;
    double compraTot, vendaTot, lucro;
    abaixo = 0;
    entre = 0;
    acima = 0;
    compraTot = 0;
    vendaTot = 0;
    lucro = 0;

    printf("Quantos produtos voce irá registrar: ");
    scanf("%d", &n);
    char nome[n][30];
    double compra[n];
    double venda[n];

    for ( i = 0; i < n; i++)
    {
        printf("\n%dº produto: \n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 30);
        printf("Valor de compra: ");
        scanf("%lf", &compra[i]);
        compraTot += compra[i];
        printf("Valor de venda: ");
        scanf("%lf", &venda[i]);
        vendaTot += venda[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (((venda[i]- compra[i])/compra[i])*100 < 10) 
        {
            abaixo ++;
        }
        else if (((venda[i]- compra[i])/compra[i])*100 > 10 && ((venda[i]- compra[i])/compra[i])*100 < 20)
        {
            entre ++;
        }
        else if (((venda[i]- compra[i])/compra[i])*100 > 20)
        {
            acima ++;
        }   
    }
    printf("\nELATORIO\n");
    printf("");
    printf("Lucro abaixo de 10%%: %d", abaixo);
    printf("\nLucro entre 10%% e 20%%: %d", entre);
    printf("\nLucro acima de 20%%: %d", acima);
    printf("");
    printf("\nValor total da compra R$%.2lf", compraTot);
    printf("\nValor total da venda  R$%.2lf\n", vendaTot);
    lucro = vendaTot - compraTot;
    printf("Lucro total R$%.2lf", lucro);

    return 0;
}