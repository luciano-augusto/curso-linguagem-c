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
    int n, i;

    printf("\nQuantos alunos serao cadastrados: ");
    scanf("%d", &n);
    char nome[n][30];
    double nota1[n];
    double nota2[n];

    for ( i = 0; i < n; i++)
    {
        printf("\nDados do %dº aluno: \n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 30);
        printf("Primeira nota: ");
        scanf("%lf", &nota1[i]);
        printf("Segunda nota: ");
        scanf("%lf", &nota2[i]);
    }
    printf("\nAlunos aprovados: ");
    for ( i = 0; i < n; i++)
    {
        if ((nota1[i] + nota2[i]) / 2 >= 6.0)
        {
            printf("\n%s", nome[i]);
        }  
    }

    return 0;
}