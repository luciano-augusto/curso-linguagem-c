#include <stdio.h>

int main(){

    int n, i, soma, media;
    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &n);
    double vet[n];
    soma = 0;
    media = 0; 

    for ( i = 0; i < n; i++)
    {
        printf("Escreva um numero: ");
        scanf("%lf", &vet[i]);
        soma += vet[i];
    }
    printf("\nValores do vetor: ");
    for( i = 0; i < n; i++)
    {
        printf("%.0lf  ", vet[i]);
    }
    printf("\nSoma dos vetores: %d.", soma);
    media = soma / n;
    printf("\nMedia: %d\n", media);

    return 0;
}