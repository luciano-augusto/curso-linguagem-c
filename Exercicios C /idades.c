#include <stdio.h>
#include <string.h>

void limpar_nome()
{
    char c; 
    while ((c = getchar()) != '\n' && c != EOF) 
    {}
}

int main()
{
    char nome1[20], nome2[20];
    double idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: \n");
    printf("Nome: ");
    fgets(nome1, 20, stdin);
    printf("Idade: ");
    scanf("%lf", &idade1);
    printf("Dados da segunda pessoa: \n");
    limpar_nome();
    printf("Nome: ");
    fgets(nome2, 20, stdin);
    fseek(stdin, 0, SEEK_END);
    //limpar_nome();
    printf("Idade: ");
    scanf("%lf", &idade2);

    media = (idade1 + idade2) / 2;

    printf("A idade média de %s e %s é de %.1lf anos.", nome1, nome2, media);

    return 0; 
}
