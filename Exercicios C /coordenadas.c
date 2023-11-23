#include <stdio.h>

int main()
{
    double x, y;

    printf("Valor de X: ");
    scanf("%lf", &x);
    printf("Valor de Y: ");
    scanf("%lf", &y);

    if (x > 0 && y > 0)
    {
        printf("\nQ1\n");
    }
    else if (x<0 && y > 0)
    {
        printf("\nQ2\n");
    }
    else if (x<0 && y<0)
    {
        printf("\nQ3\n");
    }
    else if (x>0 && y<0)
    {
        printf("\nQ4\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("\nORIGEM\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("\nEixo X.\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("\nEixo Y.\n");
    }
    
   return 0; 
}