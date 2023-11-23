#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, quad, trian, trap;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    quad = pow(a,2);
    trian = a * b / 2;
    trap = (a+b) * c / 2;

    printf("\n");
    printf("Area do quadrado: %.4lf m2 \n", quad);
    printf("Area do triangulo: %.4lf m2 \n", trian);
    printf("Area do trapezio: %.4lf m2 \n", trap);

    return 0;
}