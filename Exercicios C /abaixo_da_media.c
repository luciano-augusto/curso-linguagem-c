#include <stdio.h>

int main(){
    int n, i;
    double media, soma;
    soma = 0;

    printf("\nQuantos elementos o vetor terá: ");
    scanf("%d", &n);
    double vet[n];

    for ( i = 0; i < n; i++)
    {
        printf("Digite o %.0dº valor: ", i+1);
        scanf("%lf", &vet[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        soma += vet[i];
    }
    media = soma / (double)n;
    printf("Media dos vetores: %.3lf. \n", media);

    for ( i = 0; i < n; i++)
    {
        if (vet[i] < media)
        {
            printf("%.1lf \n", vet[i]);
        }  
    }
    
    

    return 0;
}