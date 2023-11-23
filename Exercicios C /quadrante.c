#include <stdio.h>

int main()
{
    double x, y;

    printf("Digite os valores das coordenadas X e Y: ");
    scanf("%lf", &x);
    scanf("%lf", &y);
    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            printf("\nQuadrante Q1\n");
        }
        else if (x<0 && y > 0)
        {
            printf("\nQuadrante Q2\n");
        }
        else if (x<0 && y<0)
        {
            printf("\nQuadrante Q3\n");
        }
        else if (x>0 && y<0)
        {
            printf("\nQuadrante Q4\n");
        }
        printf("Digite os valores das coordenadas X e Y: ");
        scanf("%lf", &x);
        scanf("%lf", &y);
    }
    return 0;
}