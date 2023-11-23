#include <stdio.h>

int main()
{
    int i, x;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for ( i = 0; i < x + 1; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        else
        {
            continue;
        }  
    }
    return 0;
}