#include <stdio.h>

int main(){
    int i, j, l, c;
    printf("Qual a quantidade de linhas?: ");
    scanf("%d", &l);
    printf("Qual a quantidade de colunas? ");
    scanf("%d", &c);
    int mat[l][c];

    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Digite o valor para a linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
        
    }
    printf("Valores negativos da matriz: ");
    
    for ( i = 0; i < l; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if (mat[i][j] < 0)
            {
                printf("%d\n", mat[i][j]);
            } 
        }
    }
    
    return 0;
}