#include <stdio.h>

int main(){
    int i, n, m, j, somaLinha;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &n);
    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &m);
    int mat[n][m];
    int soma[n];

    for ( i = 0; i < n; i++)
    {
        printf("Digite os elementos da %dª linha:\n", i+1);
        for ( j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }  
    }
    
    printf("Vetor gerado: ");
    
    for ( i = 0; i < n; i++)
    {
        somaLinha = 0;

        for ( j = 0; j < m; j++)
        {
            somaLinha += mat[i][j];
        }
        soma[i] = somaLinha;   
    }

    for ( i = 0; i < n; i++)
    {
        printf("\n%d", soma[i]);
    }
    
    return 0;
}