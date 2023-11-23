#include <stdio.h>

int main(){
    int n, i, soma;
    printf("Quantos valores vai ter cada vetor: ");
    scanf("%d", &n);
    int vetA[n];
    int vetB[n];

    for ( i = 0; i < n; i++)
    {
        printf("Digite o %dº valor do vetor A: ", i+1);
        scanf("%d", &vetA[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Digite o %dº valor do vetor B: ", i+1);
        scanf("%d", &vetB[i]);
    }
    printf("Vetor resultante: ");
    for ( i = 0; i < n; i++)
    {
        soma = vetA[i] + vetB[i];
        printf("\n%d", soma);
    }
    
    
    return 0;
}