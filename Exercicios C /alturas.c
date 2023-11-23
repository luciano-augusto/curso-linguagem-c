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
    int n, i, menores;
    double altMedia, porcMenores, altTot;
    altTot = 0;
    menores = 0;
    altMedia = 0;
    
    printf("Quantas pessoas serão digitadas: ");
    scanf("%d", &n);
    double altura[n];
    int idade[n];
    char nomes[n][30];

    for ( i = 0; i < n; i++)
    {
        printf("\nDados da %dª pessoa: \n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        altTot += altura[i];
    }
    altMedia = altTot / n;
    printf("\nAltura média: %.2lf", altMedia);
    
    for (i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            menores ++;
        }  
    }
    porcMenores = ((double)menores / n)*100;
    printf("\nPessoas com menos de 16 anos: %.2lf%%", porcMenores);
    for ( i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("\n%s", nomes[i]);
        }  
    }

    return 0;
}