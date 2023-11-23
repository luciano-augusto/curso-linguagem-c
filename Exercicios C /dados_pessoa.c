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
    int n, i, homem, mulher;
    double maior, menor, media, soma;
    maior = 0;
    menor = 1000; 
    media = 0;
    homem = 0;
    mulher = 0;
    soma = 0;

    printf("\nQuantas pessoas serão digitadas: ");
    scanf("%d", &n);
    double alt[n];
    char genero[n][10];

    for ( i = 0; i < n; i++)
    {
        printf("\nDados da %dª pessoa: \n", i+1);
        printf("Altura %dª pessoa: ", i+1);
        scanf("%lf", &alt[i]);
        printf("Genero da %dª pessoa: ", i+1);
        limpar_entrada();
        ler_texto(genero[i], 10);
    }
    for ( i = 0; i < n; i++)
    {
        if (genero[i][0] == 'M' || genero[i][0] == 'm')
        {
            homem ++;
        }
        else
        {
            soma += alt[i];
            mulher ++;
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        if (alt[i] > maior)
        {
            maior = alt[i];
        }
        else if (alt[i] < menor)
        {
            menor = alt[i];
        }
              
    }
    printf("\nMaior altura: %.2lf", maior);
    printf("\nMenor altura: %.2lf", menor);

    media = soma / (double)mulher;
    printf("\nMedia de altura das mulheres: %.2lf", media);
    printf("\nNumero de homens: %d\n", homem);
    return 0;
}