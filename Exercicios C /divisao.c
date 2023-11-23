#include <stdio.h>

int main(){
    
    int caso, i;
    double num, den, divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &caso);

    for (i = 0; i < caso; i++)
    {
        printf("\nEntre com o numerador: ");
        scanf("%lf", &num);
        printf("Entre com o denominador: ");
        scanf("%lf", &den);

        if (num < 0)
        {
            printf("<<Divisao impossivel>>\n");
        }
        else
        {
            divisao =  num / den;
            printf("Divisao =  %.2lf \n", divisao);
        }
        
        
    }
    return 0;     
}