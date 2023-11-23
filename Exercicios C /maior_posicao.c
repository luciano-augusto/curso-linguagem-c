#include <stdio.h>

int main(){
    int n, i, maior, pos;
    
    printf("\nQuantos numeros voce vai digitar: ");
    scanf("%d", &n);
    int vet[n];

    for ( i = 0; i < n; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for ( i = 0; i < n; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            pos = i;
        }
        else
        {
            continue;
        }
    }
    printf("\nMaior numero: %d, na %dª posiçao.\n", maior, pos+1);

    return 0;
}