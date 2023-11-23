#include <stdio.h>

int main()
{
    int senha, tent; 

    senha = 2002;

    printf("Digite a senha: ");
    scanf("%d", &tent);
    if (tent == senha)
    {
        printf("\nAcesso permitido.");
    }
    else
    {
        while (tent != senha)
        {
            printf("\nSenha invalida. Tente novamente: ");
            scanf("%d", &tent);
        }
        if (tent == senha)
        {
            printf("\nAcesso permitido.\n");
        }
    }
    return 0;   
}