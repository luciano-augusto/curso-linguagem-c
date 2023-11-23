#include <stdio.h>

int main()
{
    int x, i, prod;

    printf("Deseja a tabuada para qual valor: ");
    scanf("%d", &x);

    for (i = 1; i < 11; i++)
    {
         prod = x * i;
        printf("%d * %d = %d\n", x, i, prod);
    }
    
}