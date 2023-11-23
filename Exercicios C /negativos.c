#include <stdio.h>

int main(){
    int n, i;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &n);
    double vet[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }
    printf("\n Lista de numeros negativos: \n");
    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            printf("%.0lf \n", vet[i]);
        }
        else
        {
            continue;
        }  
    }
    

    return 0;
}