#include <stdio.h>

int main()
{
    int inicio, fim, duracao;

    printf("Hora inicial: ");
    scanf("%d", &inicio);
    printf("Hora final: ");
    scanf("%d", &fim);

    if (inicio == fim)
    {
        printf("O jogo durou 24 horas.");
    }
    else if (inicio > fim)
    {
        duracao = inicio - fim - 4;
        printf("O jogo durou %d horas.\n", duracao);
    }
    else
    {
        duracao = fim - inicio;
        printf("O jogo durou %d horas.\n", duracao);
    }
    
}