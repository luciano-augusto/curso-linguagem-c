#include <stdio.h>

int main(){
    int i, j, n, qntd;
    qntd = 0;

    printf("\nDigite a ordem da matriz: ");
    scanf("%d", &n);
    int mat[n][n];

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Elemento [%d , %d]: ", i, j);   
            scanf("%d", &mat[i][j]);
        }   
    }
    
    printf("\nDiagonal principal: ");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d  ", mat[i][j]);   
            }   
        }    
    }

    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j] < 0)
            {
                qntd ++;
            }
        }
    }
    printf("\nQuantidade de negativos: %d ", qntd);


    return 0;
}