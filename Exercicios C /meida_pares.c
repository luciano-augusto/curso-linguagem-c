#include <stdio.h>

int main(){
    int i, n, mediaPar, soma, par;

    printf("Quantos elementos terá o vetor: ");
    scanf("%d", &n);
    int vet[n];
    soma = 0;
    par = 0;

    for ( i = 0; i < n; i++)
    {
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vet[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            soma += vet[i];
            par ++; 
        }
        else
        {
            continue;
        }
    }
    if (par > 0)
    {
        mediaPar = soma / par;
        printf("\nMedia dos pares: %d", mediaPar);
    }
    else
    {
        printf("\nNenhum numero par. ");
    }

    return 0;
}