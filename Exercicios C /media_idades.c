#include <stdio.h>

int main()
{
    double media, idade, cont, tot;
    
    printf("Digite as idade: ");
    scanf("%lf", &idade);
    if (idade < 0)
    {
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else
    {
        cont = 0;
        tot = 0;
        while (idade >= 0)
        {    
            tot += idade;
            cont ++;
            scanf("%lf", &idade);

        }
        media = tot / cont;
        printf("Media de idade: %.2lf", media);  
    }
    return 0;
}