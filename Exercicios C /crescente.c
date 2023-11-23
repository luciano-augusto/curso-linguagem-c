#include <stdio.h>

int main()
{
    int x, y;
    while (x != y)
    {
        printf("\nDigite dois numeros: ");
        scanf("%d", &x);
        scanf("%d", &y);
        if(x < y)
        {
            printf("\nCrescente.");
        }
        else
        {
            printf("\nDecrescente.");
        }
    }
    
    return 0;
}