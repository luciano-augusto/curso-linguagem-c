#include <stdio.h>

int main()
{
    int x1, x2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d", &x1);
    scanf("%d", &x2);

    if (x1 > x2)
    {
        if (x1 % x2 == 0)
        {
            printf("Sao multiplos.\n");
        }
        else 
        {
            printf("Nao sao multiplos.");
        }
        
    }
    else if (x2 > x1)
    {
        if (x2 % x1 == 0 )
        {
            printf("Sao multiplos.\n");
        }
        else 
        {
            printf("Nao sao multiplos.");
        }
        
    }
 

    return 0;
}