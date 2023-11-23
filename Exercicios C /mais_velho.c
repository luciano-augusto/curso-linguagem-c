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
    int n, i, velho;
    printf("\nQuantas pessoas voce vai digitar: ");
    scanf("%d", &n);
    int idade[n];
    char nome[n][30];

    for ( i = 0; i < n; i++)
    {
        printf("\nDados da %dª pessoa: ", i+1);
        printf("\nNome: ");
        limpar_entrada();
        ler_texto(nome[i], 30);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    velho = idade[0];
    for ( i = 1; i < n; i++)
    {
        if (idade[i] > velho)
        {
            velho = i;
        }
    }
    printf("Pessoa mais velha: %s.", nome[velho]);
    return 0;
}