#include <stdio.h>

int main(){

    int n, i, fat;

    printf("Digite o valor de N: ");
    scanf("%d", &n);
    fat = 1;

    for (i = n; i > 0; i--)
    {
        fat = fat * i;
    }
    
    printf("Fatorial: %d ", fat);

    return 0;
}