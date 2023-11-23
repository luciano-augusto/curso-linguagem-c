#include <stdio.h>

int main(){
    int i, n, qntd;
    qntd = 0;

    printf("Quantos numeros vai digitar: ");
    scanf("%d", &n);
    int vet[n];

    for ( i = 0; i < n; i++)
    {
        printf("\nDigite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }
    
    printf("Numeros pares: ");
    for ( i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("\n%d", vet[i]);
            qntd ++;
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", qntd);

    return 0;
}