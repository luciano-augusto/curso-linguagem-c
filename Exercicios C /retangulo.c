#include <stdio.h>
#include <math.h>

int main()
{
    double base, alt;
    double area, peri, diag;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &alt);

    area = base * alt;
    peri = (base * 2) + (alt * 2);
    diag = sqrt(pow(base, 2) + pow(alt, 2));

    printf("Area: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", peri);
    printf("Diagonal: %.4lf\n", diag);


    return 0;
}